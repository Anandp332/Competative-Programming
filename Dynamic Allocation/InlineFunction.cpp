#include <iostream>
using namespace std;

inline int max(int a, int b) { // inline function which will paste whole code in the place of funtion calling
	return (a > b)?  a : b;//(condition) ? true part: false part    (?)-> tursary operator
}

int main() {
	int a, b;
	cin >> a >> b;

	int c = max(a, b);// inline function which will paste whole code in the place of funtion calling(here)

	int x,y;
	x = 12;
	y = 34;

	int z = max(x, y);// inline function which will paste whole code in the place of funtion calling(here)
}
// if we are using inline function then remember code of  that function not greater than 1 line otherwise compilar will ignore and treat as normal function
