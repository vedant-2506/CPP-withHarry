//Check if a character entered by the user is an alphabet or not.

#include <iostream>
using namespace std;

int main()
 {
    char ch=0;

    cout<<"Enter any charector :";
    cin>>ch;

   
    if((ch >= 'A' && ch <= 'Z')  || (ch >= 'a' && ch <= 'z') )
       cout<<ch <<" is an alphabet .\n";
    else
       cout<<ch <<" is  not an alphabet .\n";


    return 0;
 }    