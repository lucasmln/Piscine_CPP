/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:49:41 by lmoulin           #+#    #+#             */
/*   Updated: 2020/07/14 14:33:45 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	private:
		static Form	*createShrubbery(std::string target);
		static Form	*createRobotomy(std::string target);
		static Form	*createPresidential(std::string target);

		struct ChooseForm
		{
			std::string		_name;
			Form			*(*f)(std::string target);
		};
		static const ChooseForm		tab[3];

	public:
		Intern();
		Intern(const Intern &i);
		Intern	&operator=(const Intern &i);
		~Intern();

		Form	*makeForm(std::string name, std::string target);

};

#endif
