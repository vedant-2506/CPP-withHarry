//Find the roots of a quadratic equation given coefficients a, b and c.

#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int a=0,b=0,c=0;
    float d=0,e=0,f=0;
    float x1=0,x2=0;
    
    cout<<"Find root of quadratic equatio using formula \n" ;
    cout<<"Enter value of a , b and c ( dont enter a=0 ) :";
    cin>>a>>b>>c;
    d= (b*b) - (4*a*c);
    e=sqrt(d);

    f=2*a;

    x1= (b + e) / f;
    x2= (b - e) / f;

    cout<<"Root of give value is "<< x1 <<" and "<< x2 <<"\n";

}