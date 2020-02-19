#include<iostream>
using namespace std;
int a; // initializing global variable
void g(){
    cout<<a<<endl;// print a
    a++;// increasing by 1
}
void f(){
    cout<<a<<endl;// print a
    a++;// increasing by 1
    g();//calling g function
}
void g1(int& q){
    cout<<q<<endl;// print q
    q++;// increasing by 1
}
void f1(int& p){ // taking reference variable 
    cout<<p<<endl;// print p
    p++;// increasing by 1
    g1(p);//calling g1 function
}
int main(){
cout<<"using global variable:"<<endl;
a= 10;// intializing a by 10
f(); //calling f function
cout<<a<<endl;// print a

cout<<endl<<endl<<"using reference variable:"<<endl;





//we can same changes like global variable using reference vaiable in all funtion

int b = 10; // initializing b as 10.
f1(b);//calling f1 function
cout<<b<<endl; // print b

}