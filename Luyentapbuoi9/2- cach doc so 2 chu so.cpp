#include<iostream>
#include<string>
using namespace std;

int main(){
   int n;
   cout << "Phat am so co hai chu so (Dieu kien n < 99)" << endl;
   cout << "Moi nhap so:";
   cin >> n;
   int chuc = n / 10;
   int dv = n - (chuc*10);
   
   switch (chuc){
      case 1:
         cout << "Muoi ";
         break;
      case 2:
         cout << "Hai muoi ";
         break;
      case 3:
         cout << "Ba muoi ";
         break;
      case 4:
         cout << "Bon muoi ";
         break;
      case 5:
         cout << "Nam muoi ";
         break;
      case 6:
         cout << "Sau muoi ";
         break;
      case 7:
         cout << "Bay muoi ";
         break;
      case 8:
         cout << "Tam muoi ";
         break;
      case 9:
         cout << "Chin muoi ";
         break;
      }
   switch (dv){
      case 0:
         cout << "";
         break;
      case 1:
         cout << "mot";
         break;
      case 2:
         cout << "hai";
         break;
      case 3:
         cout << "ba";
         break;
      case 4: 
         cout << "bon";
         break;
      case 5:
         cout << "nam";
         break;
      case 6:
         cout << "sau";
         break;
      case 7:
         cout << "bay";
         break;
      case 8:
         cout << "tam";
         break;
      case 9:
         cout << "chin";
         break;
      }
   
   
   
   
   return 0;
}

