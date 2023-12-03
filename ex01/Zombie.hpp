#ifndef INCLUDES_HPP
#define INCLUDES_HPP
#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);




#endif