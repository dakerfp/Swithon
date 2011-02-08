
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
    SwiInt(int number);
    SwiInt(long number);
    virtual ~SwiInt();
};

class SwiFloat : public SwiTerm
{
    SwiFloat(float number);
    SwiFloat(double number);
    virtual ~SwiFloat();
};

#endif //SWITYPES_H
