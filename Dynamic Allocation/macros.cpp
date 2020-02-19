#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    int r;
    cin>>r;
    cout<<(3.14*r*r)<<endl;// In this method if code is very long and used fluently then if anyone change the value then difficult to find
    double pi = 3.14;
    cout<<(pi*r*r)<<endl; // In this method if code is very long and used fluently then if anyone change the value then difficult to find
    // like pi = pi+1
    cout<<(PI*r*r)<<endl;// it will put everywhere where PI to 3.14 before compiling the program.
}