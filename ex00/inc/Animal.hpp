/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:30:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 21:24:36 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    virtual ~Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);

    virtual void makeSound() const;
    std::string getType() const;
};
