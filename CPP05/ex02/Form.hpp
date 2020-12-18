/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:10:48 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 13:06:58 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_signedGrade;
		const int			_execGrade;
		
		Form	&operator=(const Form &f);
		Form();

	public:
		Form(std::string name, std::string target, const int signedGrade, const int execGrade);
		Form(const Form &f);
		~Form();

		int					getSignedGrade() const;
		int					getExecGrade() const;
		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getSigned() const;

		void				beSigned(const Bureaucrat &b);
		virtual void		execute(const Bureaucrat &executor) const;
		virtual void		action(const Bureaucrat &executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class FormNoSigned: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif
