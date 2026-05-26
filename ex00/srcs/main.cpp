/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:26:53 by dufama            #+#    #+#             */
/*   Updated: 2026/05/25 19:26:53 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/easyfind.hpp"
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <list>
#include <vector>

int main()
{
	// ===== List =====
	std::list<int> l1;
	l1.push_back(12);
	l1.push_back(42);
	l1.push_front(52);

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << std::endl;
	}

	// ===== Vector =====
	std::vector<int> v1;
	v1.push_back(12);
	v1.push_back(32);
	

	for (size_t i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << std::endl;
	}
	
	return 0;
}