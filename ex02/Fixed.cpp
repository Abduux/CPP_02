/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:20:23 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 21:51:01 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// copy constructor 
Fixed::Fixed(const Fixed &other) { 
    //std::cout << "Copy constructor called" << std::endl;

    *this = other;
    //this->value = other.getRawBits();
} 

// copy assignment operator  
Fixed& Fixed::operator=(const Fixed& other) 
{
    //std::cout << "Copy assignment operator called " << std::endl;
    if(this != &other)
        this->value = other.getRawBits();
    return *this;
}

// Default constructor
Fixed::Fixed(/* args */) : value(0){
    //std::cout << "Default constructor called" << std::endl;
}

//Int constructor
Fixed::Fixed(const int int_value) : value(int_value << this->fractional_bits) {// convert the int value to the fixed point representation 
    //std::cout << "Int constructor called" << std::endl;
}

//Float constructor
Fixed::Fixed(float float_point_value)  // convert the float-point value to the fixed point representation 
{
    //std::cout << "Float constructor called" << std::endl;
    this->value = roundf(float_point_value * (1 << this->fractional_bits));
}

// Default Destructor
Fixed::~Fixed() {}

// get Rawbits
int Fixed::getRawBits() const {return value;}

// SetRaw bits 
void Fixed::setRawBits(int const raw)   {this->value = raw;}

int Fixed::toInt() const    {return (this->value >> fractional_bits);}

float Fixed::toFloat() const {return (float)this->value / (1 << this->fractional_bits);}

std::ostream& operator<<(std::ostream& outStream, const Fixed& fixed)   {return (outStream << fixed.toFloat());}

// operators overload ----------------------------------

bool Fixed::operator>(const Fixed &rhs) const   {return (this->value > rhs.value);}

bool Fixed::operator<(const Fixed &rhs) const   {return (this->value < rhs.value);}

bool Fixed::operator>=(const Fixed &rhs) const  {return (this->value >= rhs.value);}

bool Fixed::operator<=(const Fixed &rhs) const  {return (this->value <= rhs.value);}

bool Fixed::operator==(const Fixed &rhs) const  {return (this->value == rhs.value);}

bool Fixed::operator!=(const Fixed &rhs) const  {return (this->value != rhs.value);}


Fixed& Fixed::min(Fixed &a, Fixed &b)                   {return (a < b ? a : b);}

const Fixed& Fixed::min(const Fixed &a,const Fixed &b)  {return (a < b ? a : b);}

Fixed& Fixed::max(Fixed &a, Fixed &b)                   {return (a > b ? a : b);}

const Fixed& Fixed::max(const Fixed &a,const Fixed &b)  {return (a > b ? a : b);}


Fixed Fixed::operator+(const Fixed &rhs) const
{
    Fixed tmp;
    tmp.value = this->value + rhs.value ;

    return tmp;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    Fixed tmp;
    tmp.value = this->value - rhs.value ;

    return tmp;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    Fixed tmp;
    tmp.value = (static_cast<long long>(this->value) * rhs.value) >> this->fractional_bits;
    return tmp;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    Fixed tmp(this->toFloat() / rhs.toFloat());
    return tmp;
}


Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->value++;
    return tmp;
}

Fixed Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->value--;
    return tmp;
}

Fixed Fixed::operator--()
{
    this->value--;
    return *this;
}