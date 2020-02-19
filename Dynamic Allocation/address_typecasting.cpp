#include<iostream>
using namespace std;
int main()
{
    int a =65;
    char c = a;
    cout<<c<<endl;
    int* p = &a;
    //char* pc = p; this will give error (implicit typecasting )
    char* pc = (char*)p; // (explicit typecasting) 
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl; //this will return null because 65 is store in 0th place 
    cout<<*(pc+2)<<endl; // this will also return null
    cout<<*(pc+3)<<endl; // this will also return null
    cout<<*p<<endl; //this will return address of integer
    cout<<pc<<endl;//this will read byte till not get null.
} 
