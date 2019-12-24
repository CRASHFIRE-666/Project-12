#include <iostream>
#include <cmath>
using namespace std;

double Fact2(int n)
{
    int i;
    double answer;
    answer = 1;
    if (n % 2 == 0){
        for (i = 2; i <= n; i += 2){
            answer *= i;
        }
    }
    else{
        for (i = 1; i <= n; i+= 2){
            answer *= i;
        }
    }
    return answer;
    
}

int main()
{
    int x;
    
    cin >> x;
    
    if (x > 0){
        cout << Fact2(x) << endl;;
    }
    else{
        cout << "NEPRAVILNYE ZNACHENYA" << endl;
    }
    
    return 0;
    
