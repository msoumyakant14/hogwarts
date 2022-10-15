/// @file gryffindor.h declares Gryffindor house class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_HOUSE_GRYFFINDOR_H_
#define HOGWARTS_SORTING_HOUSE_GRYFFINDOR_H_

#include "hogwarts/sorting/house/house.h"

namespace hogwarts
{
namespace sorting
{
namespace house
{

/// @brief class declaration for Gryffindor house.
class Gryffindor : public House
{
protected:
	int32_t __courage;
	int32_t __loyalty;	

public:
	Gryffindor();
	Attribute getAttributes() override;

	inline int32_t getCourage() const { return __courage; }

	inline void setCourage(const int32_t& courage) { __courage = courage; }

	inline int32_t getLoyalty() const { return __loyalty; }

	inline void setLoyalty(const int32_t& loyalty) { __loyalty = loyalty; }
};

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_HOUSE_GRYFFINDOR_H_
