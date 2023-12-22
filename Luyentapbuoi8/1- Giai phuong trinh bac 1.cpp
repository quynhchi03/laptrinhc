#include<iostream>
using namespace std;
int main(){
   float a,b,c,x;
   cout << "Giai phuong trinh bac I" << endl;
   cout << "Dang: ax + b = c" << endl;
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   cout << "Moi nhap c:";
   cin >> c;
   x = (c-b)/a;
   cout << "x: " << x;
   return 0;
}

