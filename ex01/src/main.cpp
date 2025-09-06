/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:11:45 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/07 00:30:03 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    std::cout << "=== Creating array of Animals ===" << std::endl;
    Animal* zoo[4];
    for (int i = 0; i < 2; i++) zoo[i] = new Dog();
    for (int i = 2; i < 4; i++) zoo[i] = new Cat();

    std::cout << "\n=== Testing sounds ===" << std::endl;
    for (int i = 0; i < 4; i++) zoo[i]->makeSound();

    std::cout << "\n=== Testing deep copy ===" << std::endl;
    Dog original;
    original.setIdea(0, "Original idea");
    
    Dog copy = original;  // Copy constructor
    copy.setIdea(0, "Modified idea");
    
    std::cout << "Original: " << original.getIdea(0) << std::endl;
    std::cout << "Copy: " << copy.getIdea(0) << std::endl;

    std::cout << "\n=== Deleting animals ===" << std::endl;
    for (int i = 0; i < 4; i++) delete zoo[i];

    return 0;
}