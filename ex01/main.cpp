/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:08:55 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 13:03:21 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string	input;
	Phonebook	pb;

	while (input != "EXIT")
	{
		std::cout << "Enter a command. (ADD, SEARCH or EXIT)" << std::endl << std::flush;
		std::getline(std::cin, input);
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.searchContact();
	}
	return (0);
}
