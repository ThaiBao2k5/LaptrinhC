#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
 double tong ;

    for (double n = 0; n <= 100; ++n) {
        tong += ((n) / (n * n + 1));
    }
    cout << "S = " << tong <<endl;
}

