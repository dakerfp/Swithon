
#include "switerm.h"
#include "switypes.h"

SwiTerm::SwiTerm()
{
}

SwiTerm::~SwiTerm()
{
}

SwiTerm *SwiTerm::create(int integer)
{
    return new SwiInt(integer);
}

SwiTerm *SwiTerm::create(long integer)
{
    return new SwiInt(integer);
}

SwiTerm *SwiTerm::create(float real)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(double real)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(const char* term_name)
{
    if (!term_name)
        return 0;
    if (islower(term_name[0]))
        return new SwiAtom(term_name);
    else
        return 0; // TODO: return new SwiVar(term_name);
}

SwiTerm *SwiTerm::create(const std::vector<SwiTerm*> &)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(const std::list<SwiTerm*> &)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(const char*, const std::vector<SwiTerm*> &)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(const char*, const std::list<SwiTerm*> &)
{
    return 0; // TODO
}

SwiTerm *SwiTerm::create(const term_t &)
{
    return 0; // TODO
}

