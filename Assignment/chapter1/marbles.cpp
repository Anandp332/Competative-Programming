#include<bits/stdc++.h>
using namespace std;
void marbles(int a[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                cout<<"true"<<endl;
                cout<<a[i]<<" "<<a[j]<<endl;
                return;
            }
        }
    }
}
int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    marbles(a,n,x);
    return 0;
}