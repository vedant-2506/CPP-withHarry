// ​Read three angles of a triangle and check whether the triangle is valid:
// a.​ Each angle must be greater than 0°.
// b.​ The sum of all three angles must be exactly 180°.


#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, c=0 ,ans=0;
    
    cout<<"To chech give angle make tringle or not \n ";
    
    cout<<"Enter first angle :";
    cin>>a;

    cout<<"Enter second angle :";
    cin>>b;

    cout<<"Enter third angle :";
    cin>>c;
 
    ans=a + b + c;
    if( a>0 && b>0 && c>0 ){

        if( ans =180){
            cout<<"Given angle make a triangle  \n";
        }
        else{
            cout<<"Given angle make not a triangle  \n";
        }

    }
    else{
        cout<<"Enter right  value os angles  \n";        
    }
  
    return 0;
}
