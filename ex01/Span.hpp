/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:55:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/23 10:39:30 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class	Span {
	public:
		Span();
		Span( unsigned int N );
		Span( const Span& obj );
		Span&	operator=( const Span& rhs);
		~Span();
		void	addNumber( unsigned int N );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		std::vector<int>	vect;
};

#endif