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

int main( void ) {
    Fixed a = 11.1112f;
    Fixed b = 11.1111f;

    Fixed c = b;

    if(a > b)
        std::cout << "a = "<< a << std::endl << "b = " << b << std::endl << "(True)" << std::endl;
    else
        std::cout << "a = "<< a << std::endl << "b = " << b << std::endl << "(False)" << std::endl;
    
    return 0;
}

