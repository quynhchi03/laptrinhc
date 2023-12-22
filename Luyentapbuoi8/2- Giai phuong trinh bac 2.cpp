#include<iostream>
#include<cmath>
using namespace std;
int main(){
   float a,b,c,x,dt;
   cout << "Giai phuong trinh bac II" << endl;
   cout << "Dang: ax^2 + bx + c = 0" << endl; 
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   cout << "Moi nhap c:";
   cin >> c;
   dt = (b*b) - (4*a*c);
   if (dt > 0){
      float x1,x2;
      x1 = (-b + sqrt(dt))/(2*a);
      x2 = (-b - sqrt(dt))/(2*a);
      cout << "Phuong trinh co 2 nghiem phan biet" << endl;
      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
      
   } else if (dt == 0) {
      x = (-b)/(2*a);
      cout << "Phuong trinh co 1 nghiem" << endl;
      cout << "x = " << x;
   } else {
      cout << "Phuong trinh vo nghiem";
   }
   return 0;
}

