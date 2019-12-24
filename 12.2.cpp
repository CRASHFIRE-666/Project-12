#include <iostream>
#include <cmath>
using namespace std;

int Sign(int a)
{
    if (a > 0){
    return 1;
    }
    else if (a == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int main()
{
    int x;
    
    cin >> x;
    
    cout << Sign(x);
    
    return 0;
    
}
