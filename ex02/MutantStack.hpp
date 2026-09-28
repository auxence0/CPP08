/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:21:37 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/28 13:40:59 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		MutantStack();
		MutantStack&	operator=( const MutantStack& rhs );
		MutantStack( const MutantStack& obj );
		virtual			~MutantStack();
		iterator		begin();
		const_iterator	begin() const;
		iterator		end();
		const_iterator	end() const;
};

# include "MutantStack.tpp"

#endif