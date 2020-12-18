/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:08:26 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 12:47:02 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): _name(b.getName()), _grade(b.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

const std::string		Bureaucrat::getName() const
{
	return (_name);
}

int				Bureaucrat::getGrade() const
{
	return (_grade);
}

void			Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void			Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void			Bureaucrat::signForm(Form &f)
{
	try
	{
		if (f.getSigned())
		{
			std::cout << f.getName() << " already sign." << std::endl;
			return ;
		}
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cant sign " << f.getName() << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executs " << form.getName() << " with succes\n";
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cant executs " << form.getName() << e.what() << std::endl;
	}
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade was too high.");
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade was too low.");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade());
}
