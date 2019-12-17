#include <iostream>

using namespace std;

int Quarter(double x, double y)
{
    if (x && y)
    {
        if (x > 0 && y > 0)
        {
            return 1;
        }
        else if (x > 0 && y < 0)
        {
            return 2;
        }
        else if (x < 0 && y < 0)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }
    
    return 0;
}

int main()
{
    double x, y;
    cin >> x >> y;
    cout << Quarter(x, y)<<endl;
    return 0;
}
