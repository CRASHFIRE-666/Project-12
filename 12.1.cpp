#include <iostream>
#include <cmath>
using namespace std;

double PowerA3(double a)
{
    int b = a * a * a;
    return b;
}

int main()
{
    double x, i;
    for (i = 0; i < 5; i++){
        cin >> x;
        cout << PowerA3(x) << endl;
    }
    return 0;
    
}
