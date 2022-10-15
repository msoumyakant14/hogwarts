/// @file print_house.h declares method to print house attributes.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_UTILS_PRINT_HOUSE_H_
#define HOGWARTS_SORTING_UTILS_PRINT_HOUSE_H_

#include "hogwarts/sorting/house/gryffindor.h"
#include "hogwarts/sorting/house/slytherin.h"

namespace hogwarts
{
namespace sorting
{
namespace house
{

/// @brief function declaration to print Gryffindor attributes.
void printAttr(const Gryffindor& gryf);

/// @brief function declaration to print Slytherin attributes.
void printAttr(const Slytherin& slyth);

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_UTILS_PRINT_HOUSE_H_
