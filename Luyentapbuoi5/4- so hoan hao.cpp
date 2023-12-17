#include <iostream>
#include <math.h>

using namespace std;

int tong(int n){
	int tong = 0;
	for(int i = 1; i <= n / 2; i++){
		if(n % i == 0){
			tong += i;
		}
	}
	return tong;
}
int main(){
	int n;
	cout <<"Nhap vao gia tri n:";
	cin >> n;
	for(int i = 1; i < n; i++){
		if(tong(i) == i){
			cout << i <<" ";
		}
	}
	return 0;
}

