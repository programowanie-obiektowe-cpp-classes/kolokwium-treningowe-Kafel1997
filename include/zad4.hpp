#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector< Tagliatelle >& w)
{
    double       M;
    unsigned int i=1;
    for (auto it = w.crbegin(); it!=w.crend();it++)
    {
        M += it->ileMaki(i);
        i++;
    }
    if(M>100)
    {
        throw 4;
    }else if (M>50)
    {
        throw 50.;
    }else
    {
        return M;
    }
    
}