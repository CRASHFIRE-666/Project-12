#include <iostream>
using namespace std;
float Fact2(int n)
{
    float b=1;
    if (n%2==0)
    {
        while (n>0)
        {
            b=b*n;
            n-=2;
        }
    }
    else
    {
        while (n>0)
        {
            b=b*n;
            n-=2;
        }
    }
    return b;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout<<"Введите число"<<endl;
    cin>>x;
    cout<<Fact2(x)<<endl;
    return 0;
}
