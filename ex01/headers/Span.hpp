/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:31:07 by dufama            #+#    #+#             */
/*   Updated: 2026/05/27 18:31:07 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span {
	private:
		unsigned int _numberOfElements;
		std::vector<int> _v;
		
	public:
		// ===== FCO =====
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		Span& operator=(const Span& assign);
		~Span();

		// ===== Member Func =====
		void addNumber(int number);
		int shortestSpan(void) const;
		int longestSpan(void) const;
		void printVector(void);
		

		// ===== Exception =====
		class OutOfIndex : public std::exception {
			virtual const char * what() const throw() {
				return "Out of Index";
			}
		};

		class NotEnoughElement : public std::exception {
			virtual const char * what() const throw() {
				return "Not Enough Element";
			}
		};

		
};

#endif