// Write a program that reads three positive numbers a, b and c which represent the lengths of
// the sides of a triangle. Check if they form a valid triangle and categorize it (equilateral,
// isosceles, scalene).
// a.​ a+b > c and a+c > b and b+c > a implies a valid triangle
// b.​ a=b=c => equilateral, a=b or a=c or b=c => isosceles, a!=b!=c => scalene

#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, c=0 ,ans=0;

    cout<<"Enter a legth of side and chectype of tringle  \n ";
    
    cout<<"Enter lengeth of first side :";
    cin>>a;

    cout<<"Enter lenght of second side :";
    cin>>b;

    cout<<"Enter lenght of  third side  :";
    cin>>c;

    if( ( (a+b) > c)  ||  ( (a+c) > b)  ||  ( (b+c) > a) ){
        cout<<"It is valid tringle  \n";

        if(a == b  && b == c){
            cout<<"It is Euilateral triangle \n";
        }
        else if((a == b) || (c == b) || (c == a) ){
            cout<<"It is Isosceles triangle \n";
        }
        else {
            cout<<"It is Scalene triangle \n";
        }
    }
    else{
        cout<<"It is not valid tringle  .\n";
    }
   

    return 0;
}