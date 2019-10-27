#include<iostream>
//#include "Solution.h"
using namespace std;
int myindex(int input[],int size,int x,int index){
    if(size==0){
        return -1;

    }
    else if(input[0]==x){
        return index;
    }
    else{
        index++;
        return myindex(input+1,size-1,x,index);
    }
}

int firstIndex(int input[], int size, int x) {
 
   int   index=0;
    return myindex(input,size, x,index);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}
