/// @file attribute_p.h declares private Attribute structure.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef ATTRIBUTE_P_H_
#define ATTRIBUTE_P_H_

#include <iostream>

namespace hogwarts
{
namespace sorting
{
namespace house
{

/// @brief Private Attribtue structure.
struct AttributePrivate
{
	uint32_t first_octet = 0U;
	uint32_t second_octet = 0U;
	uint32_t third_octet = 0U;
	uint32_t fourth_octet = 0U;
	uint32_t fifth_octet = 0U;
	uint32_t sixth_octet = 0U;
	uint32_t seventh_octet = 0U;
	uint32_t eighth_octet = 0U;
};

} // namespace house
} // namespace sorting
} // namespace hogwarts

#endif // ATTRIBUTE_P_H_
