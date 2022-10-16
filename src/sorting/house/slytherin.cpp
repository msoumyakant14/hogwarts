/// @file slyhterin.cpp defines Slytherin house class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#include "attribute_p.h"
#include "slytherin_fields.h"

#include "hogwarts/sorting/house/slytherin.h"

hogwarts::sorting::house::Slytherin::Slytherin()
{
	__name = "Slytherin";
}

hogwarts::sorting::house::Attribute
hogwarts::sorting::house::Slytherin::getAttributes()
{
	AttributePrivate attr_p;
	attr_p.eighth_octet =
		static_cast<uint32_t>(SlytherinField::RESOURCEFULNESS);
	attr_p.seventh_octet = static_cast<uint32_t>(SlytherinField::AMBITION);
	attr_p.sixth_octet = static_cast<uint32_t>(SlytherinField::CUNNINGNESS);
	Attribute attr;
	attr.code[0] = static_cast<uint8_t>(__resourcefulness);
	attr.code[1] = static_cast<uint8_t>(__ambition);
	attr.code[2] = static_cast<uint8_t>(__cunningness);
	return attr;
}
