//Check if a character is uppercase or lowercase.

 #include <iostream>
using namespace std;

int main()
 {
    char ch=0;

    cout<<"Enter any charector :";
    cin>>ch;

    if((ch >= 'A' && ch <= 'Z')  )
    {
       cout<<ch<<" is in uppercase . \n";
    }
    else if( (ch >= 'a' && ch <= 'z') )
    {
        cout<<ch<<" is in lowercase. \n";
    }

   return 0;

 }