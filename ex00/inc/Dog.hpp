/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:35:07 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 21:08:31 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "Animal.hpp"
class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);

    void makeSound() const;
};
