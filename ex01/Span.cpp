/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:08:45 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/25 14:19:10 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ) {
	vect_.reserve(N);
}

Span::Span() {
	vect_.reserve(0);
}

Span::Span( const Span& obj ) {
	if (this != &obj) {
		vect_ = obj.vect_;
	}
}

Span&	Span::operator=( const Span& rhs ) {
	vect_ = rhs.vect_;
	return *this;
}

Span::~Span() {}

void	Span::addNumber( int N ) {
	if (vect_.size() < vect_.capacity())
		vect_.push_back(N);
	else
		throw	std::runtime_error("The vector is full");
}

int	Span::shortestSpan() {
	if (vect_.capacity() < 2)
		throw	std::runtime_error("There are fewer than 2 numbers");

	std::sort(vect_.begin(), vect_.end());
	int	nb;
	nb = vect_[1] - vect_[0];
	for (unsigned int i = 1; i + 1 < vect_.size(); ++i) {
		if (vect_[i + 1] - vect_[i] < nb)
			nb = vect_[i + 1] - vect_[i];
	}
	return nb;
}

int	Span::longestSpan() {
	if (vect_.capacity() < 2)
		throw	std::runtime_error("There are fewer than 2 numbers");

	int	nb;
	std::sort(vect_.begin(), vect_.end());
	nb = *(vect_.end() - 1) - *vect_.begin();
	return nb;
}
