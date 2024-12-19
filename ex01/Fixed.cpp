/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:20:23 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 12:40:30 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// copy constructor 
Fixed::Fixed(const Fixed &other) { 
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
} 


// copy assignment operator  
Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called " << std::endl;
    if(this != &other)
        this->value = other.getRawBits();
    return *this;
}


// Default constructor
Fixed::Fixed(/* args */) : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) : value(int_value << this->fractional_bits) // convert the int value to the fixed point representation 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float float_point_value)  // convert the float-point value to the fixed point representation 
{
    std::cout << "Default constructor called" << std::endl;

    this->value = (int)roundf(float_point_value * (1 << this->fractional_bits));
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


int Fixed::toInt() const
{
    return (this->value >> fractional_bits);
}


float Fixed::toFloat() const 
{
    return static_cast<float>(this->value / (1 << this->fractional_bits));
}


std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();  // Insert the floating-point value into the stream
    return out;              // Return the stream for chaining
}


// this->value = (int)roundf(float_point_value * (1 << this->fractional_bits));

// when we turned float to fixed point we did fixed_value=round(f×2 

