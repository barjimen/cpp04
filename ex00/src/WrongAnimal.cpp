/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:15:16 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 21:15:46 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}