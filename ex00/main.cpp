/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:23:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/22 14:42:54 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main() {
	std::vector<int> vect;
	for (size_t i = 1; i < 5; ++i)
		vect.push_back(i);
	try {
		std::vector<int>::iterator find = easyfind(vect, 5);
		std::cout << "number 5 at index: " << find - vect.begin() << "\n";
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	vect.push_back(5);
	try {
		std::vector<int>::iterator find = easyfind(vect, 5);
		std::cout << "number 5 at index: " << find - vect.begin() << "\n";
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::vector<int>::iterator find = easyfind(vect, 5);
	vect.push_back(10);
	find++;
	if (*find == 10)
		std::cout << "Iterator has been successfully shifted\n";

}
