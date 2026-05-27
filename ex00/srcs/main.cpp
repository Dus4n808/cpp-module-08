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
#include <cstddef>
#include <exception>
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

	
	// ===== Vector =====
	std::vector<int> v1;
	v1.push_back(12);
	v1.push_back(32);
	v1.push_back(109);
	

	// ===== EasyFind Vector =====
	try {
		std::vector<int>::iterator res = easyfind(v1, 12);
		std::cout << "Found an occurence : " << *res << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}

	// ===== Easyfind List =====
	try {
		std::list<int>::iterator res = easyfind(l1, 32);
		std::cout << "Found an occurence : " << *res << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	
	return 0;
}