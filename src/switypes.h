
#ifndef SWITYPES_H
#define SWITYPES_H

#include "switerm.h"

class SwiAtom : public SwiTerm
{
public:
    SwiAtom(const char* atom);
    virtual ~SwiAtom();
};

class SwiInt : public SwiTerm
{
public:
    SwiInt(int integer);
    SwiInt(long integer);
    virtual ~SwiInt();
};

#endif //SWITYPES_H
