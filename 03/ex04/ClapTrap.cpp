#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "ClapTrap " <<  _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " deleted (ClapTrap)" << std::endl;
}

void ClapTrap::setStats(int a, int b, int c, int d,  int e, int f, int g,int h)
{
    _hitPoints = a;
    _maxHitPoints = b;
    _energyPoints = c;
    _maxEnergyPoints = d;
    _level = e;
    _meleeAttackDamage = f;
    _rangedAttackDamage = g;
    _armorReduction = h;
}
 
std::string ClapTrap::getName(void){return (_name);}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << _name << " attack " << target << " with a gun, for " << _rangedAttackDamage << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << _name << " attack " << target << " with a banana, for " << _meleeAttackDamage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    long long _amount = amount;

    _amount -= _armorReduction;
    if (_amount > 0){
        if (_amount > _hitPoints)
            _amount = _hitPoints;
        _hitPoints -= _amount;
        std::cout << _name << " loses " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
    }
    else
        std::cout << _name << " is so strong" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    long long _amount = amount;

    if (_amount > _maxHitPoints - _hitPoints)
        _amount = _maxHitPoints - _hitPoints;
        _hitPoints += _amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
     std::cout << _name << " gained " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
}
