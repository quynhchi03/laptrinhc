#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int k = 0;
	cout <<"Nhap vao so n:";
	cin >> n;
	while(n > 0){
		int i;
		i = n % 10;
		n /= 10;
		k++;
	}
	cout <<k;
	return 0;
}

