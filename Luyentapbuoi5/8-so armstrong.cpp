#include <iostream>
#include <math.h>

using namespace std;

int tong(int n){
	int tong = 0;
	while(n > 0){
		int i;
		i = n % 10;
		n /= 10;
		tong += pow(i, 3);
	}
	return tong;
}
int main(){
	int n;
	cout <<"Nhap vao so n:";
	cin >> n;
	if(tong(n) == n){
		cout <<"1";
	}
	else{
		cout <<"0";
	}
	return 0;
}

