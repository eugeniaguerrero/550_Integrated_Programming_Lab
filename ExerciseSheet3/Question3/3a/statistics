#include <iostream>
#include <cmath>
#include "statistics.h"

using namespace std;

double average(double n1, double n2, double n3, double n4)
{
    return (n1 + n2 + n3 + n4) / 4;
}

double standard_deviation(double n1, double n2, double n3, double n4)
{
    double arg1, arg2, arg3, arg4;
    arg1 = ((n1 - average(n1, n2, n3, n4)))*((n1 - average(n1, n2, n3, n4)));
    arg2 = ((n2 - average(n1, n2, n3, n4)))*((n2 - average(n1, n2, n3, n4)));
    arg3 = ((n3 - average(n1, n2, n3, n4)))*((n3 - average(n1, n2, n3, n4)));
    arg4 = ((n4 - average(n1, n2, n3, n4)))*((n4 - average(n1, n2, n3, n4)));

    return sqrt(average(arg1, arg2, arg3, arg4));

}