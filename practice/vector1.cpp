#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n,size;  
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>n;    
    v.push_back(n);
    } 
    vector<int>::iterator it;   
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}