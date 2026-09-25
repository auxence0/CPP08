/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:24:41 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/25 13:31:36 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stdexcept>

template< typename T >
typename T::iterator	easyfind( T& container, const int& find_int ) {
	typename T::iterator val = std::find(container.begin(), container.end(), find_int);
	if (val == container.end())
		throw	std::runtime_error("value to find isn't in the container");
	return	val;
}

#endif