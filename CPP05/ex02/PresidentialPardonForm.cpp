/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:54:16 by lmoulin           #+#    #+#             */
/*   Updated: 2020/07/13 16:41:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
	Form(s)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void		PresidentialPardonForm::action(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}
