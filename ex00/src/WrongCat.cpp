/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:16:40 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 21:17:05 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat copied!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "WrongCat assigned!" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meo- *cof* *cof* Meow??" << std::endl;
}