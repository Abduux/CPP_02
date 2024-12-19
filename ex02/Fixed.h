/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:02:03 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 12:48:15 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        /* data */
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed(/* args */); // default
        Fixed(const int int_value); // int constructor 
        Fixed(float float_value); // float constructor
        Fixed(const Fixed &other); // copy constructer 
        Fixed& operator=(const Fixed &other); // copy assignment operator overload
        ~Fixed();

        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;

        //• The 6 comparison operators
        bool operator>(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;

        //• The 4 arithmetic operators:
            Fixed operator+(const Fixed &rhs) const;
            Fixed operator-(const Fixed &rhs) const;
            Fixed operator/(const Fixed &rhs) const;
            Fixed operator*(const Fixed &rhs) const;


        //The 4 increment/decrement operators
            // Fixed operator++(int);
            // Fixed operator++();
            // Fixed operator--(int);
            // Fixed operator--();

        //The min & max member functions 
            static Fixed& min(Fixed &f1, Fixed &f2);
            static const Fixed& min(const Fixed &f1,const Fixed &f2);
            static Fixed& max(Fixed &f1, Fixed &f2);
            static const Fixed& max(const Fixed &f1,const Fixed &f2);

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);










#endif








/*
The 6 comparison operators: >, <, >=, <=, == and !=.



• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators,
 that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.
*/