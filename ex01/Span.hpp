/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:55:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/22 15:05:43 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class	Span {
	public:
		Span( unsigned int N );
		Span( const Span& obj );
		Span&	operator=( const Span& rhs);
		~Span();
		void	addNumber( unsigned int N );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		unsigned int	N_;
};

#endif