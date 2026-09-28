/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:21:37 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/28 14:17:10 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		rev_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_rev_iterator;
		MutantStack();
		MutantStack&	operator=( const MutantStack& rhs );
		MutantStack( const MutantStack& obj );
		virtual				~MutantStack();
		iterator			begin();
		const_iterator		begin() const;
		iterator			end();
		const_iterator		end() const;
		rev_iterator		rbegin();
		const_rev_iterator	rbegin() const;
		rev_iterator		rend();
		const_rev_iterator	rend() const;
};

# include "MutantStack.tpp"

#endif