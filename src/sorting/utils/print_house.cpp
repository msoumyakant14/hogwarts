/// @file print_house.cpp declares method to print house attributes.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#include "hogwarts/sorting/utils/print_house.h"

void hogwarts::sorting::house::printAttr(const Gryffindor& gryf)
{
	std::cout << "House name: " << gryf.getName() << '\n';
	std::cout << "Courage: " << gryf.getCourage() << '\n';
	std::cout << "Loyalty: " << gryf.getLoyalty() << '\n';
}

void hogwarts::sorting::house::printAttr(const Slytherin& slyth)
{
	std::cout << "House name: " << slyth.getName() << '\n';
	std::cout << "Resourcefulness: " << slyth.getResourcefulness() << '\n';
	std::cout << "Ambition: " << slyth.getAmbition() << '\n';
	std::cout << "Cunningness: " << slyth.getCunningness() << '\n';
}
