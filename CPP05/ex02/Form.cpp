/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:20:24 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 11:29:39 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, std::string target, const int signedGrade, const int execGrade):
		_name(name), _target(target), _signed(false), _signedGrade(signedGrade),  _execGrade(execGrade)
{
	if (_signedGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	if (_signedGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &f):
	_name(f.getName()), _target(f.getTarget()), _signed(false), _signedGrade(f.getSignedGrade()), _execGrade(f.getExecGrade())
{
}

Form::~Form()
{
}

const std::string		Form::getName() const
{
	return (_name);
}

const std::string		Form::getTarget() const
{
	return (_target);
}

int				Form::getSignedGrade() const
{
	return (_signedGrade);
}

int				Form::getExecGrade() const
{
	return (_execGrade);
}

bool			Form::getSigned() const
{
	return (_signed);
}

void			Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _signedGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

const char		*Form::GradeTooLowException::what() const throw()
{
	return ("Grade was too low");
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return ("Grade was too high");
}

const char		*Form::FormNoSigned::what() const throw()
{
	return ("Form was not signed");
}

void		Form::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!_signed)
			throw Form::FormNoSigned();
		if (executor.getGrade() > _execGrade)
			throw Form::GradeTooLowException();
		else
			action(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	return (out << f.getName() << ", exec grade is " << f.getExecGrade() <<
		", signed grade is " << f.getSignedGrade() << " signed : " << f.getSigned());
}
