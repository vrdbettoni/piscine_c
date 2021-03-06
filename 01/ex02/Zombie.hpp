/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:29:44 by vroth-di          #+#    #+#             */
/*   Updated: 2021/01/25 15:21:38 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <chrono>
# include <string>
# include <random>
#include <ctime>
#include <ratio>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();

        void advert();
        static std::string getName(int j);

    private:
        std::string     m_name;
        std::string     m_type;
};

#endif