#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)()> complaintMap;
	complaintMap["DEBUG"] = &Harl::debug;
	complaintMap["INFO"] = &Harl::info;
	complaintMap["WARNING"] = &Harl::warning;
	complaintMap["ERROR"] = &Harl::error;

	std::map<std::string, void (Harl::*)()>::iterator it = complaintMap.find(level);
	if (it != complaintMap.end()) {
		(this->*(it->second))();
	} else {
		std::cout << "Invalid complaint level." << std::endl;
	}
}
//map declaration lines 33 anf 39 empty () would be the function params
//it->second is to access the value of it 
//map works as key-value in this case key.type = string anf value.type = Harl