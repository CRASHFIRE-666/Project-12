#include <iostream>

using namespace std;

int Sign(double X)
{
    if (X > 0.0)
    {
        return 1;
    }
    else if (X < 0.0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double X;
    cin >> X;
    cout << Sign(X)<<endl;
    return 0;
}
