#include<iostream>
using namespace std;
void myfn(int n , int start){
    if(start==n){
        cout<<start<<endl;
        return;
    }
    else{
        cout<<start<<" ";
        start+=1;
        myfn(n,start);
        
    }
}
void print(int n){
    int start=1;
    
    myfn(n,start);
    
}

int main(){
    int n;
    cin >> n;
  
    print(n);
}

