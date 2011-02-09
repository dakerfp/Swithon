
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
public:
    SwiFloat(float number);
    SwiFloat(double number);
    virtual ~SwiFloat();
};

class SwiVar : public SwiTerm
{
public:
    SwiVar();
    SwiVar(const char *varname);
    virtual ~SwiVar();
};

class SwiList : public SwiTerm
{
public:
    SwiList(SwiTerm *terms, int length);
    virtual ~SwiList();
};

class SwiFunctor : public SwiTerm
{
public:
    SwiFunctor(const char *name, SwiTerm **terms, int arity);
    virtual ~SwiFunctor();
};

#endif //SWITYPES_H
