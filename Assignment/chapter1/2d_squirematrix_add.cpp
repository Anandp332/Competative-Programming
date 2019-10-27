#include<bits/stdc++.h>
using namespace std;
int sum_dia(int a[][100], int n){
    int sum=0;
    int i=0,j;
    for(j=0;j<n;j++){
        sum+=a[i][j];
    }
    j=n-1;
    for(i=1;i<n;i++){
        sum+=a[i][j];
    }
    i=n-1;
    for(j=n-2;j>=0;j--){
        sum+=a[i][j];
    }
    j=0;
    for(i=n-2;i>0;i--){
        sum+=a[i][j];
    }
    i=1,j=1;
    for(;j<n-1,i<n-1;j++,i++){
        sum+=a[i][j];
    }
    i=n-2,j=1;
    for(;j<n-1,i>0;i--,j++){
        sum+=a[i][j];
    }
    
    if(n%2!=0){
        int p=(n-1)/2;
        sum-=a[p][p];
        cout<<a[p][p]<<" ";
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=sum_dia(a,n);
    cout<<"result is: "<<ans<<endl;
    
    
	return 0;
}