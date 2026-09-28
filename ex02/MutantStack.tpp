/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:01:36 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/28 14:03:47 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template< typename T >
MutantStack<T>::MutantStack(): std::stack<T>() {
}

template< typename T >
MutantStack<T>::MutantStack( const MutantStack& obj ): std::stack<T>(obj) {
}

template< typename T >
MutantStack<T>&	MutantStack<T>::operator=( const MutantStack& rhs ){
	if ( this != &rhs )
		std::stack<T>::operator=(rhs);
	return *this;
}

template< typename T >
MutantStack<T>::~MutantStack() {
};

template< typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return this->c.begin();
}

template< typename T >
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return this->c.begin();
}

template< typename T >
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return this->c.end();
}

template< typename T >
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{
	return this->c.end();
}

template< typename T >
typename MutantStack<T>::rev_iterator MutantStack<T>::rbegin(){
	return this->c.rbegin();
}

template< typename T >
typename MutantStack<T>::const_rev_iterator MutantStack<T>::rbegin() const {
	return this->c.rbegin();
}

template< typename T >
typename MutantStack<T>::rev_iterator MutantStack<T>::rend(){
	return this->c.rend();
}

template< typename T >
typename MutantStack<T>::const_rev_iterator MutantStack<T>::rend() const {
	return this->c.rend();
}

#endif