#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


vector<int> longestSubsequence(int *arr, int n){
	// Write your code here
sort(arr,arr+n);
    vector<int> result;
    int templen=0;
    vector<int> temp;
    temp.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(temp[templen]==(arr[i]-1)){
            temp.push_back(arr[i]);
            templen++;
        }
        else{
            if(temp.size()>result.size()){
                for(int p=0;p<temp.size();p++){
                    result[p]=temp[p];
                }
                
            }
            templen=0;
            temp[templen]=arr[i];
        }
    }
     if(temp.size()>result.size()){
                for(int p=0;p<temp.size();p++){
                    result[p]=temp[p];
                }
                
            }
    return result;
}

int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	vector<int> output = longestSubsequence(input, n);
	for(int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
