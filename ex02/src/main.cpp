/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:11:45 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/08 20:49:43 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    // 1. No se puede instanciar un AAnimal
    // AAnimal a;            
    // AAnimal* b = new AAnimal();

    // 2. Creamos un array de AAnimal* con mitad perros y mitad gatos
    const int N = 4;
    AAnimal* animals[N];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // 3. Probar polimorfismo
    std::cout << "\n--- Testing sounds ---" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "Type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    // 4. Liberar memoria y comprobar destructores
    std::cout << "\n--- Deleting animals ---" << std::endl;
    for (int i = 0; i < N; i++) {
        delete animals[i];
    }

    return 0;
}
