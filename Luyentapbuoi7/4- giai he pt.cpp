#include<iostream>
// giai he pt  
using namespace std;
int main(){
   float a,b,c,d,e,z,y,x;
   cout << "Giai he phuong trinh" << endl;
   cout << "ax + by = c" << endl;
   cout << "dx + ey = z" << endl;
   cout << "Nhap he so:" << endl;
   cout << "Moi nhap a:";
   cin >> a;
   cout << "Moi nhap b:";
   cin >> b;
   cout << "Moi nhap c:";
   cin >> c;
   cout << "Moi nhap d:";
   cin >> d;
   cout << "Moi nhap e:";
   cin >> e;
   cout << "Moi nhap z:";
   cin >> z;
   y = (z - ((d*c)/a))/(e-((d*b)/a));
   x = (c-b*y)/a;
   cout << "Nghiem la:" << endl;
   cout << "x:" << x << endl;
   cout << "y:" << y << endl;

   return 0;
}

