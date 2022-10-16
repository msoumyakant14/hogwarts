/// @file gryffindor.cpp defines Gryffindor house class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#include "attribute_p.h"
#include "gryffindor_fields.h"

#include "hogwarts/sorting/house/gryffindor.h"

hogwarts::sorting::house::Gryffindor::Gryffindor()
{
	__name = "Gryffindor";
}

hogwarts::sorting::house::Attribute
hogwarts::sorting::house::Gryffindor::getAttributes()
{
	AttributePrivate attr_p;
	attr_p.eighth_octet = static_cast<uint32_t>(GryffindorField::COURAGE);
	attr_p.seventh_octet = static_cast<uint32_t>(GryffindorField::LOYALTY);
	Attribute attr;
	attr.code[0] = static_cast<uint8_t>(__courage);
	attr.code[1] = static_cast<uint8_t>(__loyalty);
	return attr;
}
