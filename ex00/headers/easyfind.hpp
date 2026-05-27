/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:29:25 by dufama            #+#    #+#             */
/*   Updated: 2026/05/25 19:29:25 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <vector>
#include <iostream>

class NotFoundOccurence : public std::exception {
	public:
		virtual const char * what() const throw() {
			return "No occurence found";
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int n) {
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); ++it) {
		if (*it == n) {
			return it;
		}
	}
	throw NotFoundOccurence();
}


#endif