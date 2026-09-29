/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:34:20 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/29 11:18:27 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\nCOMP WITH LIST\n\n";

	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);
	
	std::cout << mlist.back() << std::endl;
	
	mlist.pop_back();
	
	std::cout << mlist.size() << std::endl;
	
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	
	std::list<int>::iterator it_list = mlist.begin();
	std::list<int>::iterator ite_list = mlist.end();

	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}

	MutantStack<int> s(mstack);
	std::cout << "\nCOPY mstack\n\n";
	std::cout << "first num of the stack -> " << *s.begin() << "\n";
	s.push(173);
	std::cout << "last num of the stack -> " << *(--s.end()) << "\n";
	std::cout << "Size before pop() -> " << s.size() << "\n";
	s.pop();
	std::cout << "And now the last -> " << s.size() << "\n";

	*s.rbegin() = 999;
	std::cout << "\nDISPLAY NUMBERS IN REVERSE ORDER\n\n";
	for	(MutantStack<int>::rev_iterator rit = s.rbegin(); rit != s.rend(); ++rit)
		std::cout << *rit << "\n";

	MutantStack<int> assign = s;
	std::cout << "\nTEST ASSIGNMENT\n\n";
	std::cout << *s.begin() << "\n";
	std::cout << *s.rbegin() << "\n";

	return 0;
}