// cho 2 so nguyen duong a va b, tim UCLN 
#include<iostream>
using namespace std;
int main(){
   int a,b,UCLN;
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   int so = 0;
   if (a > b){
      so = b;
   }
   else {
      so = a;
   }
   for (int i = 1; i <= so; i++){
      if ((a % i == 0) and (b % i == 0)){
         UCLN = i;
      }
   }
   cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << UCLN;
   return 0;
}

