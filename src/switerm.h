
#ifndef SWITERM_H
#define SWITERM_H

#include <cctype>
#include <vector>
#include <list>

#include <SWI-Prolog.h>

class SwiTerm
{
public:
    SwiTerm();
    virtual ~SwiTerm();

    term_t &toProlog() { return term; }

    static SwiTerm *create(int);
    static SwiTerm *create(long);
    static SwiTerm *create(float);
    static SwiTerm *create(double);
    static SwiTerm *create(const char* term_name);
    static SwiTerm *create(const std::vector<SwiTerm*> &);
    static SwiTerm *create(const std::list<SwiTerm*> &);
    static SwiTerm *create(const char*, const std::vector<SwiTerm*> &);
    static SwiTerm *create(const char*, const std::list<SwiTerm*> &);
    static SwiTerm *create(const term_t &);

protected:
    term_t term;
};

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

#endif //SWITERM_H
