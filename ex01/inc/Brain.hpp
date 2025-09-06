/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:24:51 by barjimen          #+#    #+#             */
/*   Updated: 2025/09/06 23:49:17 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};
