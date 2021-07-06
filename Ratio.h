#ifndef RATIO_CLASS_RATIO_H
#define RATIO_CLASS_RATIO_H
class Ratio{
    int _numerator;
    int _denominator;
    int gcd(int first, int second) const;
    int lcm(int first, int second) const;
    void reduce();
public:
    Ratio(int numerator, int denominator);
    Ratio();
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int numerator);
    void setDenominator(int denominator);
    Ratio multiplication(const Ratio& ratio) const;
    Ratio operator*(const Ratio& ratio) const;
    Ratio sum(const Ratio& ratio) const;
};
#endif