#include<bits/stdc++.h>
using namespace std;
void sum_me_up(int arr[], int size){
	for(int i=0;i<size;i++){
		int temp=0;
		while(arr[i]){
			temp+=arr[i]%10;
			arr[i]=arr[i]/10;
		}
		arr[i]=temp;
	}
}
int main() {

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
	// Write your code here
}
sum_me_up(arr,n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<endl;
}
}