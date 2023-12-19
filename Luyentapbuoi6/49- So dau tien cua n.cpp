#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, i;
	cout <<"Nhap vao so n:";
	cin >> n;
	while(n >= 10){
		n /= 10;
	} 
	cout <<"Chu so dau tien trong so n la:"<< n<<endl;
	return 0;
}

