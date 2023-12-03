#include "Zombie.hpp"


	Zombie::Zombie(void)
	{
		_name = "(null)";
		std::cout << this->_name << " has just lost his brain(z)" << std::endl;

	}
	Zombie::Zombie(std::string name)
	{
		_name = name;
		std::cout << this->_name << " has just lost his brain(z)" << std::endl;
	}
	Zombie::~Zombie(void)
	{
		std::cout << this->_name << " has been Z-liminated" << std::endl;
	}
	void	Zombie::announce(void)
	{
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void	Zombie::setName(std::string name)
	{
		this->_name = name;
	}
