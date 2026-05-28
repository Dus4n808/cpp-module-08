/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:34:21 by dufama            #+#    #+#             */
/*   Updated: 2026/05/27 18:34:21 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

// ================================================================ //
// FCO                       
// ================================================================ //


// ===== Default Constructor =====
Span::Span() : _numberOfElements(0), _v() {}

// ===== Default Constructor(unsigned int) =====
Span::Span(unsigned int n) : _numberOfElements(n), _v() {}

// ===== Copy Constructor =====
Span::Span(const Span& copy) : _numberOfElements(copy._numberOfElements), _v(copy._v) {}

// ===== Overload =====
Span& Span::operator=(const Span& assign) {
	std::vector<int>::iterator it;
	if (this != &assign) {
		_numberOfElements = assign._numberOfElements;
		_v = assign._v;
	}
	return *this;
}

// ===== Destructor =====
Span::~Span() {}

// ================================================================ //
// Member Func                      
// ================================================================ //


void Span::addNumber(int number) {
	if (_numberOfElements != 0) {
		_v.push_back(number);
		_numberOfElements--;
	}
	else {
		throw OutOfIndex();
	}
}

void Span::printVector() {
	std::vector<int>::iterator it;
	for (it = _v.begin(); it != _v.end(); ++it) {
		std::cout << *it << std::endl;
	}
}

int Span::shortestSpan() const {
	if (_v.size() < 2)
		throw NotEnoughElement();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int span = (tmp.back()) - *(tmp.begin());
	std::vector<int>::iterator it;
	for (it = tmp.begin(); it != tmp.end() - 1; ++it) {
		if (span > (*(it + 1) - *(it)))
			span = (*(it + 1) - *(it));
	}
	return span;
}


int Span::longestSpan() const {
	if (_v.size() < 2)
		throw NotEnoughElement();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return tmp.back() - *(tmp.begin());
}


