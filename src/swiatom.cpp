
#include "swiatom.h"

SwiAtom::SwiAtom(const char *atom)
    : SwiTerm()
{
    term = PL_new_atom(atom);
}

SwiAtom::~SwiAtom()
{
}


SwiInt::SwiInt(int integer)
    : SwiTerm()
{
    PL_put_integer(term, integer);
}

SwiInt::SwiInt(long integer)
    : SwiTerm()
{
    PL_put_integer(term, integer);
}

SwiInt::~SwiInt()
{
}
