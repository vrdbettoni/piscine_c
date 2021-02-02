#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        virtual void setStats(int a, int b, int c, int d, int e, int f, int g, int h);
        std::string getName(void);

    protected:
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorReduction;

        void    setStats();
    
    private:
        std::string _name;
};

#endif