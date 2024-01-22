#include "Zombie.hpp"
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie	*zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << i;
        std::string zombieName = name + ss.str();
        zombies[i].setName(zombieName);
    }
    return (zombies);
}