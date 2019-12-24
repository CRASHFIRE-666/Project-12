#include <iostream>
#include <cmath>
using namespace std;

double RingS(double r1, double r2)
{
    double s;
    
    s = 3.14 * (r1 * r1 - r2 * r2);
    
    return s;
}

int main()
{
    int x, y, i;
    
    for (i = 0; i < 3; i++){
        cin >> x;
        cin >> y;
        cout << RingS(x, y);
    }
    return 0;
    
}
