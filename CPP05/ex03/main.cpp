/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:35:58 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/16 13:13:26 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include <exception>
#include <iostream>

int main()
{
    Intern someRandomIntern;
    Bureaucrat Biden("joe", 1);
    Bureaucrat Trump("Donald", 150);
    Form *rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;
    
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;
    
    rrf = someRandomIntern.makeForm("coffee", "Bender");
}