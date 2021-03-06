#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Bobby")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Bobby" << std::endl;
    _type = "FRAGTRAP";
    _name = "Bobby";
    FragTrap::setStats();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FRAGTRAP " << _name << " created" << std::endl;
    _type = "FRAGTRAP";
    FragTrap::setStats();
}

FragTrap::~FragTrap()
{
    std::cout << _name << " deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Assignement operator called" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::setStats()
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorReduction = 5;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string attack[5] = {" with an m&m's", " with an egg", " with nothing", " with a knife", " with a saber"};
    if (_energyPoints >= 25){
        std::cout << _type << " " << _name << " attack " << target << attack[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << _type << " " << _name << " have not enough energy points" << std::endl;
}
