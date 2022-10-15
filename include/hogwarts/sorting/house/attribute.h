/// @file attribute.h declares Attribute structure.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_HOUSE_ATTRIBUTE_H_
#define HOGWARTS_SORTING_HOUSE_ATTRIBUTE_H_

#include "hogwarts/sorting/wizard.h"

namespace hogwarts
{
namespace sorting
{
namespace house
{

/// @brief Attribtue structure.
struct Attribute
{
	uint8_t code[Wizard::qual_len] = {0U};
};

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_HOUSE_ATTRIBUTE_H_
