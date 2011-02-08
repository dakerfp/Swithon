
#ifndef SWITHON_H
#define SWITHON_H

#include <SWI-Prolog.h>

#include "switerm.h"
#include "swiatom.h"

// Type correspondency:
//
//      Cpp Type | Prolog Type
// long, int     | integer
// float, double | float
//         char* | atom
//         Char* | var
//   std::vector | list
//    class Term | term


class Swithon
{
public:
    Swithon();
};



// class Swithon
// {
// public:
//     Swithon();
//     ~Swithon();
// };

#endif //SWITHON_H
