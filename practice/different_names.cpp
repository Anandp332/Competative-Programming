
#include<bits/stdc++.h>
#include<map>
#include<cstring>
#include<vector>
using namespace std;
map<string,int> different_names(string str){
map<string , int> res;

for(int i=0; i<str.length();i++){
	string temp;
	for(int j=i;str[j]!=' ' && j<str.length();j++,i++){
		temp+=str[i];
	}
res[temp]++;
}
return res;
}


int main()
{
    string str;
    getline(cin,str);
 	map<string,int>  m;
 	m= different_names(str);

 	map<string,int>:: iterator it;
	for(it=m.begin();it!=m.end();it++){
		if (it->second>=2)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
	return 0;
}