/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:34:54 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/06 23:54:36 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor!" << std::endl;
}


Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor!" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator!" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index < 0 || index >= 100)
        ideas[index] = idea;
    else
        std::cout << "Invalid index" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Invalid index" << std::endl;
        return ("");
    }
    else
        return (this->ideas[index]);
}
