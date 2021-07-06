#include "Ratio.h"
#include <iostream>
using namespace std;
Ratio::Ratio(int numerator, int denominator) : _numerator(numerator)
{
    if(!denominator)
    {
        cout << "Denominator must be not equal zero";
        return;
    }
    _denominator = denominator;
    reduce();
}
Ratio::Ratio() : Ratio(1,1)
{
}
int Ratio::getNumerator() const
{
    return _numerator;
}
int Ratio::getDenominator() const
{
    return _denominator;
}
void Ratio::setNumerator(int numerator)
{
    _numerator = numerator;
}
void Ratio::setDenominator(int denominator)
{
    if(!denominator)
    {
        cout << "Denominator must be not equal zero";
        return;
    }
    _denominator = denominator;
}
Ratio Ratio::multiplication(const Ratio& ratio) const
{
    int numerator = _numerator* ratio._numerator;
    int denominator = _denominator *ratio._denominator;
    Ratio result(numerator,denominator);
    result.reduce();
    return result;
}
int Ratio::gcd (int a, int b) const
{
    return b ? gcd (b, a % b) : a;
}

void Ratio::reduce()
{
    int nod = gcd(_numerator,_denominator);
    _numerator /= nod;
    _denominator /=nod;
}
Ratio Ratio::sum(const Ratio &ratio) const
{
    int nok = lcm(_denominator,ratio._denominator);
    int chis = _numerator*(nok/_denominator) + ratio._numerator*(nok/ratio._denominator);
    Ratio result(chis,nok);
    result.reduce();
    return result;
}
int Ratio::lcm(int first, int second) const
{
    return first*second/ gcd(first,second);
}

Ratio Ratio::operator*(const Ratio &ratio) const {
    Ratio result(_numerator*ratio._numerator, _denominator*ratio._denominator);
    return result;
}
