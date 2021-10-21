// Check if string is mutable in C++ or not?

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string a = "Hello\n";
  cout<<"\n"<<&a;
  a[0] = 'J';
  cout<<"\n"<<&a;
  cout<<"\n"<<a;
  return 0;
}
