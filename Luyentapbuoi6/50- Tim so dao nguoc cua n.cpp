#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int x = 0, y = 0;
	cout <<"Nhap vao so n:";
	cin >> n;
	if(n < 10){
		cout <<"So dao nguoc cua n la:"<< n;
	}
	else{
		while(n != 0){
			y = n % 10;
			n /= 10;
			x = (x * 10) + y;
		}
		cout <<"So dao nguoc cua n la:" << x<<endl;
	}
	return 0;
}

