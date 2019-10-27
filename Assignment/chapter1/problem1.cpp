#include<bits/stdc++.h>
using namespace std;
void oddeve(int arr[], int n){
    int odd=0,eve=0;
    for(int i=0;i<n;i++){
        if(i%2==0 && arr[i]%2==0){
            eve+=arr[i];
        }
        else if(i%2!=0 && arr[i]%2!=0){
            odd+=arr[i];
        }

    }
    cout<<eve<<"  "<<odd<<endl;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    oddeve(arr,n);
}