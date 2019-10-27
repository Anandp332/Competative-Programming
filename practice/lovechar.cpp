#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
vector<int> loveChar(string str){
    map<char, int> f;
    map<char , int>::iterator it;
    vector<int> result;
    string temp="asp";
    for(int p=0;p<temp.length();p++){
        f[temp[p]]=0;
    }
    for(int i=0;i<str.length();i++){
        for(int j=0;j<temp.length();j++){
            if(str[i]==temp[j]){
                f[str[i]]++;
            }
        }
    }
    
    for(int p=0;p<temp.length();p++){
        result.push_back(f[temp[p]]);   
    }
    return result;
    
}
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> result = loveChar(str);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
	return 0;
}
