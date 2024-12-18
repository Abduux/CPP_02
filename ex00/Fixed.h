/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:02:03 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/18 09:15:00 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        /* data */
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed(/* args */);
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

Fixed::Fixed(const Fixed &other) { // copy constructor 
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
} 

Fixed& Fixed::operator=(const Fixed& other) // copy assignment operator  
{
    std::cout << "Copy assignment operator called " << std::endl;
    if(this == &other)
        return (*this);

    this->value = other.getRawBits();
    return *this;
}

Fixed::Fixed(/* args */) : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called !" << std::endl;
}

int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

#endif
