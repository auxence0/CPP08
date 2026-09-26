/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:21:37 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/26 17:38:08 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack: public std::stack<T> {
	public:
		MutantStack();
		MutantStack&	operator=( const MutantStack& rhs );
		MutantStack( const MutantStack& obj );
		~MutantStack();
		
};

#endif