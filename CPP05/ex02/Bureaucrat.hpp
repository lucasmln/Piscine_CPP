/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:44:27 by lmoulin           #+#    #+#             */
/*   Updated: 2020/07/13 16:28:36 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string		_name;
		int						_grade;
		
		Bureaucrat		&operator=(const Bureaucrat &b);

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		~Bureaucrat();

		const std::string		getName() const;
		int				getGrade() const;

		void			incrementGrade();
		void			decrementGrade();
		void			signForm(Form &f);
		void			executeForm(const Form &form);

		class GradeTooHighException: public std::exception
		{
			virtual const char	*what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char	*what() const throw();
		};


};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);


#endif
