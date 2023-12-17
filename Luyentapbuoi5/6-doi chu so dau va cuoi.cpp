#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, i;
	cout <<"Nhap vao so n:";
	cin >> n;
	while(n > 0){
		i = n % 10;
		n /= 10;
		cout << i;
	}
	return 0;
}

