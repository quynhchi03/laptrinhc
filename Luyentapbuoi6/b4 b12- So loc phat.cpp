#include <iostream>
#include <math.h>

using namespace std;

int kt(int n){
	while(n > 0){
		int i;
		i = n % 10;
		n /= 10;
		if((i == 0) || (i == 6) || (i == 8)){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	int a;
	cout <<"Nhap vao so n:";
	cin >> a;
	cout <<"Ket qua kiem tra:"<< kt(a);
	return 0;
}

