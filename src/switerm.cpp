
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

SwiTerm *SwiTerm::create(const term_t &term)
{
    switch( PL_term_type(term) ) {
        // TODO add lists, strings and vars support
    case PL_ATOM:

    case PL_INTEGER:
        long long_value;
        PL_get_long(term, &long_value);
        return new SwiInt(long_value);

    case PL_FLOAT:
        double float_value;
        PL_get_float(term, &float_value);
        return new SwiFloat(float_value);

    case PL_TERM:
        term_t atom_name;
        int functor_arity;

        PL_get_name_arity(term, &atom_name, &functor_arity);

        SwiTerm *subterms[functor_arity];

        for(int n = 1; n <= functor_arity; n++) {
            term_t aux = PL_new_term_ref();
            PL_get_arg(n, term, aux);
            subterms[n-1] = SwiTerm::create(aux);
        }

        return new SwiFunctor(PL_atom_chars(atom_name), subterms, functor_arity);

    default:
        return 0; // TODO
    }

}

