//Compute profit or loss given cost price and selling price; display the result.

#include <iostream>
using namespace std;

int main() {
    float SLP=0, CSP=0, profit=0,loss=0;

    cout<<"Enter Selling price ";
    cin>>SLP;

    cout<<"Enter cost price ";
    cin>>CSP;

    if(SLP >= CSP){
        profit=SLP-CSP;
        cout<<"Profit is "<<profit<<" \n";
    }
    else{
        loss=CSP-SLP;
        cout<<"Loss is "<<loss<<" \n";
    }
    

    return 0;
    
}   

    
    
