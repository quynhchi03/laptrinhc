#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, chan = 0 , le = 0;
	cout <<"Nhap vao gia tri n:";
	cin >> n;
	while(n > 0){
		int i = 0;
		i = n % 10;
		n /= 10;
		if(i % 2== 0){
			chan++;
		}
		else{
			le++;
		}
	}
	cout << chan <<" "<< le;
	return 0;
}

