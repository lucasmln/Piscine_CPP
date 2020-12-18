/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:16:55 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 11:29:10 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s):
	Form(s)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void		RobotomyRequestForm::action(const Bureaucrat &executor) const
{
	if (rand() % 3)
	{
		std::cout << "TRRRRRRRRR, BZZZZZZZ\n";
		std::cout << getTarget() << " has been robotomized succesfully !\n";
	}
	else
		std::cout << executor.getName() << " was not robotomized...\n";
}
