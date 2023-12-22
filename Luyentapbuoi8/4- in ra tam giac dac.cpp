#include<iostream>
using namespace std;
int main(){
   int h;
   cout << "Moi nhap do cao tam giac:";
   cin >> h;
   int rong = (h*2) - 1;
   int stb = (rong/2) + 1;
   int so = 0;
   for (int i = 1; i<= h; i++){
      for (int j = 1; j <= rong; j+= 1){
         int ght = stb - so;
         int ghp = stb + so;
         if ((j >= 1 and j <= ght) or (j>= ghp and j <= rong)){
            cout << " ";
         } else {
            cout << "*";
         }
      }
      so += 1;
      cout << endl;
   }
   return 0;
}

