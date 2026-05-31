/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:05:49 by dufama            #+#    #+#             */
/*   Updated: 2026/05/29 13:05:49 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		// ===== FCO =====
		MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& assign);
		~MutantStack();
		
		// ===== Alias =====
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		// ===== Method =====
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		// // ===== Alias Const =====
		// typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		// // ===== const Method =====
		// const_iterator begin() const { return this->c.begin(); }
		// const_iterator end() const { return this->c.end(); }
	
};

// ===== Default Constructor =====
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

// ===== Copy Constructor =====
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}

// ===== Overload =====
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& assign) {
	if (this != &assign) {
		std::stack<T>::operator=(assign);
	}
	return *this;
}


// ===== Destructor =====
template <typename T>
MutantStack<T>::~MutantStack() {}

#endif