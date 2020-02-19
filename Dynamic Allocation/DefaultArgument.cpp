#include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0) {// default argument is si if we'll give si's value otherwise it will take by default 0
	int ans = 0;
	for (int i = si; i < size; i++) {
		ans += a[i];
	}
	return ans;
}

int sum2(int a, int b = 0, int c = 0, int d = 0) {// here b , c , d are default argument if we'll not give these values then by default take 0
	return a + b + c + d;
}

int main() {
	 int a[2];
	 for(int i=0;i<2;i++){
         cin>>a[i];
     }

	 cout <<"sum: "<< sum(a, 2) << endl;
     cout<<"sum2: "<<sum2(20)<<endl;
     cout<<"sum2: "<<sum2(20,2)<<endl;
     cout<<"sum2: "<<sum2(20,2,4)<<endl;
     cout<<"sum2: "<<sum2(20,2,6,9)<<endl;
}
