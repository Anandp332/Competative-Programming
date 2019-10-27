#include<bits/stdc++.h>
using namespace std;
void team(int a[],int n){
    for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
        int sum=0;
        sum=a[i]+a[j];
        int temp=sum%10;
        cout<<(sum-temp)/10<<" "<<temp<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    team(a,n);
    return 0;
}

