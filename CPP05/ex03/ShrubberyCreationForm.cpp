/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:54:16 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 11:29:20 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

static std::string TREES =
    "            ,@@@@@@@,\n"
    "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
    ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
    "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
    "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
    "`&%\\ ` /%&'    |.|        \\ '|8'\n"
    "    |o|        | |         | |\n"
    "    |.|        | |         | |\n"
    " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";


ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s):
	Form(s)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void        ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
    std::fstream    file;
    
    (void)executor;
    file.open((getTarget() + "_shrubbery").c_str(), std::fstream::out);
	file << TREES;
    std::cout << "File creat with succes\n";
}