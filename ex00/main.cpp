
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("brainless1");
	zombie->announce();
	randomChump("brainless2");
	delete zombie;
}