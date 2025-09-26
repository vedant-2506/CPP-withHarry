//Check if a character is a vowel or consonant.

#include <iostream>
using namespace std;

int main()
 {
    char ch=0;

    cout<<"Enter any charector :";
    cin>>ch;

    if((ch >= 'A' && ch <= 'Z')  || (ch >= 'a' && ch <= 'z') )
    {
        if( (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || 
            (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')    )
            {
                cout<<ch<<"   is a vowel . \n";

            }
        else
                cout<<ch<<"   is a  consonant. \n";

    }
    else
    cout<<" Enter right  alphabet .\n";
  
    return 0;

}   