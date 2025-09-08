/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:59 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/07 00:25:58 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
Cat::Cat(/* args */)
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructor!" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copied!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        this->type = other.type;
        delete this->brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}