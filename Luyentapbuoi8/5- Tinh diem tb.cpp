#include<iostream>
using namespace std;

float diemtrungbinh(float x, float y){
   float dtb = (x+y)/2;
   return dtb;
}


int main(){
   float dtb, toan, van;
   char ho[10],lot[10],ten[10];
   cout << "Chuong trinh tinh diem trung binh" << endl;
   cout << "Moi nhap ho va ten: ";
   cin >> ho >> lot >> ten;
   cout << "Moi nhap diem van:";
   cin >> van;
   cout << "Moi nhap diem toan:";
   cin >> toan;
   dtb = diemtrungbinh(van,toan);
   system("cls");
   cout << "CHUONG TRINH TINH DIEM TRUNG BINH" << endl;
   cout << "Hoc sinh: " << ho << " " << lot << " " << ten << endl;
   cout << "Diem trung binh:" << dtb;
   
   
   
   return 0;
}

