//​Accept two integer 𝑥, 𝑦 and compute :


#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int  x=0,y=0 ;
    int b=0,d=0, e=0,f=0;
    float a=0,c=0 ,g=0;

    cout<<"Enter x and y value  :";
    cin>>x>>y;

    //1
    a= (x* x *x) + (3*(x*x)) + (4*x) - (y*y*y);

    //2
    b=(2* (x*x)) + (4*(y*y)) + (x*x*x) + 10;
    c=sqrt(b);

    //3
    d= (4* (x*x)) + (8*(y*y)) + (x*x*x) + 10;
    e=sqrt(d);
    f=(2*(x*x));
    g= e/f;


    //print answer 
    cout<<" 1 ->"<<a<<".\n";
    cout<<" 2 ->"<<c<<".\n";
    cout<<" 3 ->"<<g<<".\n";
    
    return 0; 
}