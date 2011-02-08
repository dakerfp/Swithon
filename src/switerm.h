
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


#endif //SWITERM_H
