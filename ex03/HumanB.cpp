#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(0)
{

}
HumanB::~HumanB()
{
    
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}