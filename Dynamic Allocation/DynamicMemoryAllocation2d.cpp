#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    //creating ar[m][n] where m= no of rows and n = no of col
 int** ar = new int*[m];//creating m rows 
 for(int i=0;i<m;i++){
     ar[i] = new int[n];
     for(int j=0;j<n;j++){// for taking input element of ith row
         cin>>ar[i][j];
     }
 }
 // if we want to create m size and (1 to m+1) col then 
 int** arr = new int*[m];
 for(int i=0;i<m;i++){
     arr[i] = new int[i+1];
     for(int j=0;j<i+1;j++){
         cin>>arr[i][j];
     }
 } 

 // Deallocate the memory
 for(int i=0;i<m;i++){
     delete [] ar[i];
 }
 delete [] ar;
 for(int i=0;i<m;i++){
     delete [] arr[i];
 }
 delete [] arr;

}