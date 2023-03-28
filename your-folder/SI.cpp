#include<iostream>
using namespace std;
void SI(float p,float n,float r);
int main()
{
    float p,n,r;
    cout<<"Enter the value of p: ";
    cin>>p;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of r: ";
    cin>>r;
    SI(p,n,r);
    return 0; 
}

void SI(float p,float n,float r)
{
    float interest;
    interest = p*n*r/100;
    cout<<"Simple interest is: "<<interest<<"\n";
    
}