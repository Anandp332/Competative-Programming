#include<bits/stdc++.h>
using namespace std;
int chakri(int a[], int n){
    int max=a[0];
    int min=a[0];
    int temp=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
       }  
        
        if(min<a[i]){
        temp=                
        }
    }
    return (max-a[0]);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prof= chakri(a,n);
    cout<<prof<<endl;
    return 0;
}