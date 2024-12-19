/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:08:04 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 12:51:56 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// int main( void )
// {
//     // const Fixed a = 15.1112f;
//     // const Fixed b = 11.1111f;
//     // std::cout << "min is : " << Fixed::min(a , b) << std::endl;
//     // std::cout << "max is : " << Fixed::max(a , b) << std::endl;

//     Fixed a(4.5f);
//     Fixed b(9.0f);


//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;

//     std::cout << "a + b = " << a + b<<std::endl;
//     std::cout << "a - b = " << a - b<<std::endl;
//     std::cout << "a * b = " << a * b << std::endl;
//     std::cout << "a / b = " << a / b << std::endl;
//     return 0;
// }



int main(void) {
    // Basic arithmetic operations
    {
        std::cout << "\n=== Basic Arithmetic Tests ===\n";
        Fixed a(4.5f);
        Fixed b(2.0f);
        
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "a + b = " << (a + b) << " (expected: 6.5)" << std::endl;
        std::cout << "a - b = " << (a - b) << " (expected: 2.5)" << std::endl;
        std::cout << "a * b = " << (a * b) << " (expected: 9.0)" << std::endl;
        std::cout << "a / b = " << (a / b) << " (expected: 2.25)" << std::endl;
    }

    // Edge cases
    {
        std::cout << "\n=== Edge Cases ===\n";
        Fixed zero(0);
        Fixed one(1);
        Fixed large(1234.5678f);
        Fixed small(0.0039f);
        
        std::cout << "large = " << large << std::endl;
        std::cout << "small = " << small << std::endl;
        std::cout << "large * small = " << (large * small) << std::endl;
        std::cout << "one / small = " << (one / small) << std::endl;
        
        // Test division by zero - should handle appropriately
        std::cout << "Attempting division by zero:" << std::endl;
        try {
            std::cout << one / zero << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;
        }
    }

    // Comparison operators
    {
        std::cout << "\n=== Comparison Tests ===\n";
        Fixed a(3.14f);
        Fixed b(3.14f);
        Fixed c(2.718f);

        std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "a == b: " << (a == b) << " (expected: 1)" << std::endl;
        std::cout << "a != c: " << (a != c) << " (expected: 1)" << std::endl;
        std::cout << "a > c: " << (a > c) << " (expected: 1)" << std::endl;
        std::cout << "c < a: " << (c < a) << " (expected: 1)" << std::endl;
        std::cout << "a >= b: " << (a >= b) << " (expected: 1)" << std::endl;
        std::cout << "c <= a: " << (c <= a) << " (expected: 1)" << std::endl;
    }

    // Increment/Decrement operators
    // {
    //     std::cout << "\n=== Increment/Decrement Tests ===\n";
    //     Fixed a(5.5f);
    //     std::cout << "Initial a = " << a << std::endl;
        
    //     std::cout << "++a = " << ++a << std::endl;
    //     std::cout << "a = " << a << std::endl;
    //     std::cout << "a++ = " << a++ << std::endl;
    //     std::cout << "a = " << a << std::endl;
        
    //     std::cout << "--a = " << --a << std::endl;
    //     std::cout << "a = " << a << std::endl;
    //     std::cout << "a-- = " << a-- << std::endl;
    //     std::cout << "a = " << a << std::endl;
    // }

    // Min/Max functions
    {
        std::cout << "\n=== Min/Max Tests ===\n";
        Fixed a(15.1112f);
        Fixed b(11.1111f);
        
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min(a,b) = " << Fixed::min(a, b) << std::endl;
        std::cout << "max(a,b) = " << Fixed::max(a, b) << std::endl;
        
        // Test const versions
        const Fixed c(20.5f);
        const Fixed d(20.5f);
        std::cout << "const min = " << Fixed::min(c, d) << std::endl;
        std::cout << "const max = " << Fixed::max(c, d) << std::endl;
    }

    return 0;
}