/// @file gryffindor.cpp defines Gryffindor house class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#include "hogwarts/sorting/house/gryffindor.h"

hogwarts::sorting::house::Gryffindor::Gryffindor()
{
	__name = "Gryffindor";
}

hogwarts::sorting::house::Attribute
hogwarts::sorting::house::Gryffindor::getAttributes()
{
	Attribute attr;
	attr.code[0] = static_cast<uint8_t>(__courage);
	attr.code[1] = static_cast<uint8_t>(__loyalty);
	return attr;
}
