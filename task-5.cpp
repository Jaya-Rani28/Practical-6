#include<iostream>
#include<string>
using namespace std;

int main()
{
  string a = "apple";
  string b = "apple";
  string c = "camp";
  string d = "good";
  string e = "Goodbye";
  string x = "Ant";
  string y = "mango"; 
  cout<<a.compare(c)<<endl;
  cout<<a.compare(b)<<endl;
  cout<<d.compare(e)<<endl; 
  cout<<x.compare(a)<<endl;
  return 0;
}
