#include<iostream>
using namespace std;
void factorial(int num);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
    return 0;
}

void factorial(int num)
{
    int fact=1;
    if(num<0)
    {
        cout<<"Undefined\n";
    }
    else if(num == 0)
    {
        cout<<"Factorial is 1\n";
    }
    else
    {
        while(num>0)
        {
            fact = fact*num;
            num--;
        }
        cout<<"Factorial is "<<fact<<"\n";
    }
}
