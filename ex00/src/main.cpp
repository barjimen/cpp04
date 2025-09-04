/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:44:53 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/04 21:21:31 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const WrongAnimal* wrongA = new WrongAnimal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wrong = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << wrong->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
wrong->makeSound();
wrongA->makeSound();
meta->makeSound();

return 0;
}