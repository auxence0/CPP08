/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:08:45 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/22 15:12:23 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ): N_(N) {}

Span::Span( const Span& obj ): N_(obj.N_) {}

Span&	Span::operator=( const Span& rhs ) {
	N_ = rhs.N_;
}

Span::~Span() {}

void	addNumber( unsigned int N) {
	
}
