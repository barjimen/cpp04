/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:40 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 20:56:10 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
    this->type = "Dog";
    std::cout << "Dog constructor!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Car desconstructor!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << "Dog copied!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "Dog assigned!" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}