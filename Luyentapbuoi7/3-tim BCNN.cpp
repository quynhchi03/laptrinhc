// cho 2 so nguyen duong a va b, tim BCNN  
#include<iostream>
using namespace std;
int main(){
   int a,b;
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   int so = 0;
   int so_lon = 0;
   if (a > b){
      so = b;
      so_lon = a;
   }
   else {
      so = a;
      so_lon = b;
   }
   int bcnn = 0;
   for (int i = 1; i <= so_lon; i++){
      int boi = so * i;
      if ((boi % a == 0) and (boi % b == 0)){
         
         if (bcnn == 0){
            bcnn = boi;
         }
      }
   }
   cout << "Boi chung nho nhat cua " << a << " va " << b << " la " << bcnn;
   return 0;
}

