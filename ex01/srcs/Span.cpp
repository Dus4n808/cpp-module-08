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

// ================================================================ //
// FCO                       
// ================================================================ //


// ===== Default Constructor =====
Span::Span() : _numberOfElements(0) {}

// ===== Default Constructor(unsigned int) =====
Span::Span(unsigned int n) : _numberOfElements(n) {}

// ===== Copy Constructor =====
Span::Span(const Span& copy) : _numberOfElements(copy._numberOfElements) {}

// ===== Overload =====
Span& Span::operator=(const Span& assign) {
	if (this != &assign) {
		_numberOfElements = assign._numberOfElements;
	}
	return *this;
}

// ===== Destructor =====
Span::~Span() {}

// ================================================================ //
// Member Func                      
// ================================================================ //




