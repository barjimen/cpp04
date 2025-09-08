/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:30:32 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/08 20:50:14 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
class AAnimal
{
protected:
    std::string type;
public:
    AAnimal(/* args */);
    virtual ~AAnimal();
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);

    virtual void makeSound() const = 0;
    std::string getType() const;
};


//Virtual destructor -> evitar leak de memoria, tmb se permite redefinir el comportamiento.
//Ahora en el ex02, se procede a modifcar Animal para que sea abstracta, como bien dice el
//subject, no es lógico crear un Animal genérico, existen Animales concretos (dog o cat)
//Vamos, que dejará de ser instanciable, ya no será posible hacer new Animal();
//Esta clase debe tener almenos una función virtual y crear un "contrato". Esto se refiere
//al = 0; 
//Esto significa:
// 1. No se pueden crear obj de la clase Animal
// 2. El "Contrato" significa: es la base que obliga a las otras clases a tener makeSound()
//Un ejemplo sencillito sería que dog tiene makeSound por lo tanto cumple el "contrato", pero
//Animal solo no lo hace, no hace un ruido como tal por lo tanto seria erroneo.