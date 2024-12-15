#include "catch.hpp"
// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Makaron
{
public:
    virtual double ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string&);
    virtual ~Makaron()                     = default;
};

class Tagliatelle : public Makaron
{
private:
    double              L, W, R;
    static const double C;

public:
    double ileMaki(unsigned int P) const override { return P * L * W * (1. - R) * C; }

    Tagliatelle(double l, double w, double r) : L{l}, W{w}, R{r} {};
    Tagliatelle() : L{0.5}, W{0.5}, R{0.5} {};
};