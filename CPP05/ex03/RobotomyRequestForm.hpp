/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:29:56 by lmoulin           #+#    #+#             */
/*   Updated: 2020/07/13 16:38:51 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_HPP
# define ROBOTOMYREQUEST_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &s);

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &s);
		virtual ~RobotomyRequestForm();

		virtual void	action(Bureaucrat const &executor) const;
};

#endif
