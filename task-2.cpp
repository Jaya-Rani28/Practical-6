#include<iostream>
#include<string.h>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l;  
    for(l = 0; str[l] != '\0'; l++);

    int i;
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);

    if(i == l/2)
        cout << "Entered string is Palindrome number";
    else
        cout << "Entered string is Not a palindrome number\n\n";
	
    return 0;
}

