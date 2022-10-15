/// @file slytherin.h declares Slytherin house class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_HOUSE_SLYTHERIN_H_
#define HOGWARTS_SORTING_HOUSE_SLYTHERIN_H_

#include "hogwarts/sorting/house/house.h"

namespace hogwarts
{
namespace sorting
{
namespace house
{

/// @brief class declaration for Slytherin house.
class Slytherin : public House
{
protected:
	int32_t __resourcefulness = 0;
	int32_t __ambition = 0;
	int32_t __cunningness = 0;

public:
	Slytherin();
	Attribute getAttributes() override;
	
	inline int32_t getResourcefulness() const { return __resourcefulness; }
	
	inline void setResourcefulness(const int32_t& resourcefulness)
	{
		__resourcefulness = resourcefulness;
	}
	
	inline int32_t getAmbition() const { return __ambition; }

	inline void setAmbition(const int32_t& ambition)
	{
		__ambition = ambition;
	}

	inline int32_t getCunningness() const { return __cunningness; }

	inline void setCunningness(const int32_t& cunningness)
	{
		__cunningness = cunningness;
	}
};

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_HOUSE_SLYTHERIN_H_
