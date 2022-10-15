/// @file wizard.h declares singleton object for Wizard class.
/// ---------------------------------------------------------------------------
/// This project is the property of the half blood prince
/// ---------------------------------------------------------------------------

#ifndef HOGWARTS_SORTING_WIZARD_H_
#define HOGWARTS_SORTING_WIZARD_H_

#include <iostream>

namespace hogwarts
{
namespace sorting
{

/// @brief Wizard class.
class Wizard
{
public:
	static const int32_t qual_len = 32;

public:
	static Wizard& info()
	{
		static Wizard wiz;
		return wiz;
	}

	const int32_t getQualLen() const { return qual_len; }

private:
	Wizard(){};
	Wizard(Wizard&);
};

} // namespace sorting
} // namespace hogwarts

#endif // HOGWARTS_SORTING_WIZARD_H_
