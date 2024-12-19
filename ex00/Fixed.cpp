/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:19:43 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 21:58:08 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


// copy assignment operator  
Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called " << std::endl;
    if(this != &other)
        this->value = other.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &other) { 
    std::cout << "Copy constructor called" << std::endl;

    *this = other;
    //this->value = other.getRawBits();
} 

// Default constructor
Fixed::Fixed(/* args */) : value(0){
    std::cout << "Default constructor called" << std::endl;
}


// Default Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor Called !" << std::endl;
}

// get Rawbits
int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}


// SetRaw bits 
void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}