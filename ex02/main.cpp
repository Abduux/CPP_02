/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:08:04 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/19 21:47:37 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

// int main() {
//     Fixed a(42);              // Integer constructor
//     Fixed b(42.42f);          // Float constructor
//     Fixed c;                  // Default constructor

//     // Expected Results
//     // Default constructor: 0
//     // Integer constructor: 42
//     // Float constructor: ~42.42 (precision may vary)

//     std::cout << "Default constructor: " << c << std::endl; // Expected: 0
//     std::cout << "Integer constructor: " << a << std::endl; // Expected: 42
//     std::cout << "Float constructor: " << b << std::endl;   // Expected: ~42.42

//     // Test toInt() and toFloat()
//     std::cout << "a.toInt(): " << a.toInt() << std::endl;       // Expected: 42
//     std::cout << "b.toFloat(): " << b.toFloat() << std::endl;   // Expected: ~42.42

//     return 0;
// }

// int main() {
//     Fixed a(10.5f);    // Float constructor
//     Fixed b(2);        // Integer constructor

//     // Addition
//     Fixed sum = a + b;
//     std::cout << "Addition: " << a << " + " << b << " = " << sum << std::endl; // Expected: 10.5 + 2 = 12.5

//     // Subtraction
//     Fixed diff = a - b;
//     std::cout << "Subtraction: " << a << " - " << b << " = " << diff << std::endl; // Expected: 10.5 - 2 = 8.5

//     // Multiplication
//     Fixed product = a * b;
//     std::cout << "Multiplication: " << a << " * " << b << " = " << product << std::endl; // Expected: 10.5 * 2 = 21.0

//     // Division
//     Fixed quotient = a / b;
//     std::cout << "Division: " << a << " / " << b << " = " << quotient << std::endl; // Expected: 10.5 / 2 = 5.25

//     return 0;
// }

// int main() {
//     Fixed a(10.5f); // Float constructor
//     Fixed b(2);     // Integer constructor
//     Fixed c(10.5f); // Same value as `a`

//     std::cout << std::boolalpha; // Print boolean values as true/false

//     // Expected Results
//     // a > b: true
//     // a < b: false
//     // a >= c: true
//     // a <= c: true
//     // a == c: true
//     // a != b: true

//     std::cout << "a =" << a << " , b=" << b << " , c="<< c << std::endl;
//     std::cout << "a > b: " << (a > b) << std::endl;    // Expected: true
//     std::cout << "a < b: " << (a < b) << std::endl;    // Expected: false
//     std::cout << "a >= c: " << (a >= c) << std::endl;  // Expected: true
//     std::cout << "a <= c: " << (a <= c) << std::endl;  // Expected: true
//     std::cout << "a == c: " << (a == c) << std::endl;  // Expected: true
//     std::cout << "a != b: " << (a != b) << std::endl;  // Expected: true
//     std::cout << "a != c: " << (a != c) << std::endl;  // Expected: true
//     return 0;
// }

// int main() {
//     Fixed a(10); // Integer constructor

//     std::cout << "Initial value: " << a << std::endl; // Expected: 10
//     std::cout << "Applied  operation: " << a-- << std::endl; // Expected: 10 (then increment to 11)
//     std::cout << "After operation " << a << std::endl; // Expected: 11

//     return 0;
// }


int main() {
    Fixed a(42);
    Fixed b = a;  // Copy constructor
    Fixed c;
    c = a;        // Assignment operator

    // Expected Results
    // Original value: 42
    // Copied value (b): 42
    // Assigned value (c): 42

    std::cout << "Original value: " << a << std::endl; // Expected: 42
    std::cout << "Copied value (b): " << b << std::endl; // Expected: 42
    std::cout << "Assigned value (c): " << c << std::endl; // Expected: 42

    return 0;
}
