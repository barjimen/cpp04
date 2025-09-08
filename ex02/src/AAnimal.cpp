/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:34:35 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 20:56:05 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/AAnimal.hpp"

AAnimal::AAnimal(/* args */)
{
    this->type = "AAnimal";
    std::cout << "AAnimal constructor!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor!" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makes a sound" << std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}
