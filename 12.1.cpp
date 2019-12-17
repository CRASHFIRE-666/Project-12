#include <iostream>
using namespace std;
float PowerA3(float a)
{
    float b;
    b=a*a*a;
    return b;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите значения"<<endl;
    float x[5];
    for (int i=0; i<5; i++)
    {
        cin>>x[i];
    }
    for (int i=0; i<5; i++)
    {
        cout<<PowerA3(x[i])<<endl;
    }
}
