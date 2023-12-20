// cho n la so nguyen duong, tim k sao cho S(k)< n, S(k)= 1+2+...+k

#include<iostream>
#include<cmath>
using namespace std;
int main(){
   float n,sum,k;
   cout << "Moi nhap n:";
   cin >> n;
   sum = 0;
   k = 0;
   while (sum < n){
      k+= 1;
      cout << "k la " << k << endl;
      sum += k;
   }
   cout << "Gia tri cua k la " << k << endl;
   cout << "Tong la " << sum; 
   return 0;
}

