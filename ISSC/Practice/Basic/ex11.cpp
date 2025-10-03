//Read the string "Hello World" using scanf and print it. (Explore why this may fail.)

#include <iostream>
#include <cstdio>   
using namespace std;

int main() {
    char str[50];   
    printf("Enter a string: ");
    scanf("%s", str);  

    printf("You entered: %s\n", str);

    return 0;
}
