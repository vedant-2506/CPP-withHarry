
//Print a square pattern based on user input (height)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the height of the square: ";
    cin >> n;

    cout << "Square Pattern:\n";

    for (int i = 1; i <= n; i++) 
    {       
        for (int j = 1; j <= n; j++)
         {  
            cout << "*\t";                
        }
        cout << endl;                    

    }
    return 0;
}

