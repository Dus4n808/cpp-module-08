/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:30:55 by dufama            #+#    #+#             */
/*   Updated: 2026/05/27 18:30:55 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

void fillTab(Span& toFill, unsigned int num) {
	for (unsigned int i = 0; i < num; i++) {
		int randNum = rand() % 10000000; 
		toFill.addNumber(randNum);
	}
}

int main() {
	srand(time(NULL));
	Span a(5);
	Span b(10000000);
	try {
		a.addNumber(34);
		a.addNumber(4654);
		a.addNumber(43);
		a.addNumber(4);
		a.addNumber(24);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		fillTab(b, 100);
		std::cout << "Tab fill success" << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	a.printVector();
	std::cout << "Span : " << b.shortestSpan() << std::endl;
	a.printVector();
	std::cout << "Big Span : " << b.longestSpan() << std::endl;
}