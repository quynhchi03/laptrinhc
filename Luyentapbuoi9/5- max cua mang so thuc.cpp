
#include<iostream>
#include<cmath>
using namespace std;

float max(int mang[], int n){
   int m = mang[0];
   for (int i = 1; i<=n-1; i++){
      if (m < mang[i]){
         m = mang[i];
      }
   }
   cout << "Gia tri lon nhat trong mang la " << m;
}


int main(){
   int n;
   cout << "Moi nhap so phan tu cua mang:"; 
   cin >> n;
   int mang[n];
   for (int i = 0; i<= n-1; i++){
      cout << "Moi nhap phan tu mang[" << i << "]=";
      cin >> mang[i];
   }
   cout << "Mang vua nhap la ";
   for (int i = 0; i<= n - 1; i++){
      cout << mang[i] << " ";
   }
   cout << endl;
   max(mang, n);
   
   
   return 0;
}

