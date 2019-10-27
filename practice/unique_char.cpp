#include<iostream>
#include<set>
#include<cstring>
using namespace std;
    
bool f1(string s , char ch){
	for(int i=0;i<s.length();i++){
		if(s[i]==ch){
			return false;
		}
	}
	return true;
}
char* uniqueChar(char *str){
    // Write your code here
    string str1;
    for(int i=0;str[i]!='\0';i++){
    	if(f1(str1,str[i])){
    		str1+=str[i];
    	}
    }
    int i=0;
    for(;i<str1.length();i++){
    	str[i]=str1[i];
    }
    str[i]='\0';
    return str;
}

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
