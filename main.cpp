#include <iostream>
#include "Ratio.h"
using namespace std;
void printRatio(const Ratio& ratio)
{
    cout << ratio.getNumerator() << "/" << ratio.getDenominator();
}
int main()
{
    Ratio ratio1(2,5);
    Ratio ratio2;
    printRatio(ratio1);
    cout << endl;
    printRatio(ratio2);
    cout << endl;
    ratio2.setNumerator(3);
    ratio2.setDenominator(4);
    printRatio(ratio2);
    cout << endl;
    const Ratio& multiplication = ratio1*ratio2;
    printRatio(multiplication);
    cout << endl;
    Ratio sum = ratio1.sum(ratio2);
    printRatio(sum);
    cout << endl;
    return 0;
}
