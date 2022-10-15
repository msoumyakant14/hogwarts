/// @file house.h provides interface for hogwarts houses.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_HOUSE_HOUSE_H_
#define HOGWARTS_SORTING_HOUSE_HOUSE_H_

#include "hogwarts/sorting/house/attribute.h"

namespace hogwarts
{
namespace sorting
{
namespace house
{
/// @brief Interface for hogwarts houses.
class House
{
protected:
	std::string __name;

public:
	virtual Attribute getAttributes() = 0;
	inline std::string getName() const { return __name; }
};

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_HOUSE_HOUSE_H_
