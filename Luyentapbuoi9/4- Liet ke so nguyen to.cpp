#include<iostream>
using namespace std;

//Hàm ki?m tra s? nguyên t?
int nt(int n){
   int s = 0;
   for (int i = 1; i<= n; i++){
      if (n%i == 0){
         s+= 1;
      }
   }
   if (s == 2){
      return n;
   } else {
      return 0;
   }
}
int main(){
   int n;
   cout << "Moi nhap n: ";
   cin >> n;
   for (int i = 1; i<= n; i++){
      int so = nt(i);
      if (so != 0){
         cout << so << " ";
      }
   }

   return 0;

}

