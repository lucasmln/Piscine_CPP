/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/12/16 11:28:30 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include <iostream>

int main()
{
    std::cout << "1." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 1);
        Bureaucrat b2("Johnny", 150);
        std::cout << "Success: " << b1 << "; " << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "2." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 0);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "3." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 200);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "4." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 2);
        b1.incrementGrade();
        b1.decrementGrade();
        b1.incrementGrade();
        b1.incrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "5." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 150);
        b1.decrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    {
        std::cout << "10." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        PresidentialPardonForm f1("Your dad10");
        b2.signForm(f1);
        f1.execute(b2);
    }

    {
        std::cout << "11." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        PresidentialPardonForm f1("Your dad11");
        b2.signForm(f1);
        f1.execute(b1);
    }

        {
        std::cout << "12." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        PresidentialPardonForm f1("Your dad12");
        b1.signForm(f1);
        f1.execute(b1);
    }

    {
        std::cout << "13." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        RobotomyRequestForm f1("Your dad13");
        b2.signForm(f1);
        f1.execute(b2);
    }

    {
        std::cout << "14." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        RobotomyRequestForm f1("Your dad14");
        b2.signForm(f1);
        f1.execute(b1);
    }

    {
        std::cout << "15." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        RobotomyRequestForm f1("Your dad15");
        b1.signForm(f1);
        f1.execute(b1);
    }

    {
        std::cout << "16." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        ShrubberyCreationForm f1("Your dad16");
        b2.signForm(f1);
        f1.execute(b2);
    }

    {
        std::cout << "16 bis." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        ShrubberyCreationForm f1("Your dad16 bis");
        b2.signForm(f1);
        f1.execute(b2);
    }

    {
        std::cout << "17." << std::endl;
        Bureaucrat b1("Johnny", 150);
        Bureaucrat b2("Joe", 1);
        ShrubberyCreationForm f1("Your dad17");
        b2.signForm(f1);
        f1.execute(b1);
    }

        {
        std::cout << "18." << std::endl;
        Bureaucrat b1("Johnny", 150);
        ShrubberyCreationForm f1("Your dad18");
        b1.signForm(f1);
        f1.execute(b1);
    }
}
