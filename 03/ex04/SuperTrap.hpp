#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
    public:
        SuperTrap();
        SuperTrap(std::string name);
        ~SuperTrap();

        SuperTrap(const SuperTrap&);
        SuperTrap& operator=(const SuperTrap&);
};

#endif