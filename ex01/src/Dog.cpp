/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:40 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/07 00:26:31 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(/* args */)
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor!" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Car desconstructor!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    *this = other;
    std::cout << "Dog copied!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        this->type = other.type;
        delete this->brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned!" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return this->brain->getIdea(index);
}