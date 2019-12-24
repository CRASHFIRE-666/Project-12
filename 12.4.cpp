#include <iostream>
#include <cmath>
using namespace std;

string Quarter(double x, double y)
{
    if (x != 0 && y != 0){
        if (x > 0 && y > 0){
            return "The First";
        }
        else if (x < 0 && y > 0){
            return "The Second";
        }
        else if (x < 0 && y < 0){
            return "The Third";
        }
        else{
            return "The Fourth";
        }
            
    }
    else{
        return "Invalid values";
    }
    
}

int main()
{
    double x, y, i;
    
    for (i = 0; i < 3; i++){
        cin >> x;
        cin >> y;
        cout << Quarter(x, y) << endl;
    }
    
    return 0;
    
}
