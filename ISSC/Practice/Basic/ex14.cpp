//​Accept two integer 𝑥, 𝑦 and compute :


#include<iostream>
using namespace std;
int main()
{
    int  x=0,y=0 ;
    int a=0,b=0,c=0;

    cout<<"Enter x and y value  :";
    cin>>x,y;

    a= (x* x *x) + (3*(x*x)) + (4*x) - (y*y*y);

    b=(2* (x*x)) + (4*(y*y)) + (x*x*x) + 10;
    c=sque(b);

    d= (4* (x*x)) + (8*(y*y)) + (x*x*x) + 10;
    e=sque(d);
    f=(2*(x*x));
    g= e/f;


    cout<<" 1 ->"<<a<<".\n";
    cout<<" 2 ->"<<c<<".\n";
    cout<<" 3 ->"<<g<<".\n";
    
    return 0; 
}