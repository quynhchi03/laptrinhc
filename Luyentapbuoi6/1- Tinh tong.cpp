#include <iostream>
#include <math.h> 

using namespace std;

int main(){
	float n, sum = 0;
	cout <<"Nhap vao gia tri n:";
	cin >> n;
	for(float i =  1; i <= n; i++){
		sum += (float)pow(i, 1/ ( i + 1));
	}
	cout <<"Tong cua phep tinh la:" << sum <<endl;
	return 0;
}
