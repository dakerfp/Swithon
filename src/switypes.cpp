
#include "switypes.h"

SwiAtom::SwiAtom(const char *atom)
    : SwiTerm()
{
    term = PL_new_atom(atom);
}

SwiAtom::~SwiAtom()
{
}


SwiInt::SwiInt(int number)
    : SwiTerm()
{
    PL_put_integer(term, number);
}

SwiInt::SwiInt(long number)
    : SwiTerm()
{
    PL_put_integer(term, number);
}

SwiInt::~SwiInt()
{
}

SwiFloat::SwiFloat(float number)
    : SwiTerm()
{
    PL_put_float(term, number);
}

SwiFloat::SwiFloat(double number)
    : SwiTerm()
{
    PL_put_float(term, number);
}

SwiFloat::~SwiFloat()
{
}
