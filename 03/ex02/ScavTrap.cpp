#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Serena")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is serena" << std::endl;
    _name = "Serena";
    ScavTrap::setStats();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _name(name)
{
    std::cout << "ScavTrap " << _name << " created" << std::endl;
    ScavTrap::setStats();
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " deleted" << std::endl;
}

void ScavTrap::setStats()
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorReduction = 3;
}

void ScavTrap::challengeNewcomer()
{
    std::string challenge[5] = {" try to catch a hen", " run", " is wimming 10km", " try to fly", " can't do the challenge"};
    if (_energyPoints >= 25){
        std::cout << _name << challenge[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "not enough energy points" << std::endl;
}