#include<iostream>
#include<cmath>
using namespace std;
int main(){
   cout << "Giai phuong trinh trung phuong" << endl;
   cout << "Dang: ax^4 + bx^2 + c = 0" << endl;
   float a,b,c,x,x1,x2,dt,t,t1,t2;
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   cout << "Moi nhap c:";
   cin >> c;
   dt = (b*b) - (4*a*c);
   if (dt > 0){
      t1 = (-b + sqrt(dt))/(2*a);
      t2 = (-b - sqrt(dt))/(2*a);
      cout << "Phuong trinh co 4 nghiem phan biet" << endl;
      cout << "x1:" << sqrt(t1) << endl;
      cout << "x2:" << -(sqrt(t1)) << endl;
      cout << "x3:" << sqrt(t2) << endl;
      cout << "x4:" << -(sqrt(t2))<< endl; 
   } else if (dt == 0){
      x = (-b)/(2*a);
      cout << "Phuong trinh co 2 nghiem phan biet" << endl;
      cout << "x1:" << sqrt(x) << endl;
      cout << "x2:" << -(sqrt(x)) << endl;
   } else {
      cout << "Phuong trinh vo nghiem";
   }
   
   return 0;
}

