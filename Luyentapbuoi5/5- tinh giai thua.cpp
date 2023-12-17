#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int tich = 1;
	cout <<"Nhap vao gia tri n:";
	cin >> n;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	cout << tich;
	return 0;
}
