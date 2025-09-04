/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:34:35 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 20:56:05 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(/* args */)
{
    this->type = "Animal";
    std::cout << "Animal constructor!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor!" << std::endl;
}
Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
