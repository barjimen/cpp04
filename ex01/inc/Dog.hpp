/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:07 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/07 00:23:04 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);

    void makeSound() const;
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};
