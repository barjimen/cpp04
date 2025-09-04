/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:59 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 20:56:16 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
    this->type = "Cat";
    std::cout << "Cat constructor!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "Cat copied!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
        this->type = other.type;
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}