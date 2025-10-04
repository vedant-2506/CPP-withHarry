
#include <iostream>
using namespace std;

int main() {
    int num=0;

    cout << "Enter a number ";
    cin >> num;

    if(num<100){
        cout<<"Small \n";
    }
    else if(num >= 100 && num <= 200 ){
        cout<<"Large \n";
    }
    else   if(num >=  201 && num <= 300){
        cout<<"Biger \n";
    }
    else   if(num >= 301 && num <= 400){
        cout<<"Largest \n";
    }
    else{
        cout<<"very large \n";
    }
    
    
    
    return 0;
}