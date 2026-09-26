/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:00:35 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/25 14:20:45 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch ( const std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	try {
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << "\n";
	}
	
	Span	empty;
	try {
		std::cout << empty.shortestSpan() << "\n";
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << "\n";
	}

	Span	Mucho(1000);
	srand(time(NULL));
	try {
		for ( int i = 0; i < 1000; ++i )
			Mucho.addNumber(rand());
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << "\n";
	}
	try {
		std::cout << Mucho.longestSpan() << "\n";
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << "\n";
	}
	try {
		Mucho.addNumber(rand());
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << "\n";
	}
	return 0;
}