#include<iostream>
#include<string>
using namespace std;

int main(){
   int n;
   cout << "Phat am so co ba chu so (Dieu kien n < 99)" << endl;
   cout << "Moi nhap so:";
   cin >> n;
   int tram = n / 100;
   int chuc = (n - (tram * 100))/10;
   int tam = (n - (tram * 100));
   int dv = tam - (chuc * 10);
   cout << "Tram: " << tram << endl;
   cout << "Chuc: " << chuc << endl;
   cout << "Don vi:" << dv << endl;
   switch (tram){
      case 1: {
         cout << "Mot tram ";
         break;
      }
      case 2: {
         cout << "Hai tram ";
         break;
      }
      case 3: {
         cout << "Ba tram";
         break;
      }
      case 4: {
         cout << "Bon tram";
         break;
      }
      case 5: {
         cout << "Nam tram";
         break;
      }
      case 6: {
         cout << "Sau tram";
         break;
      }
      case 7: {
         cout << "Bay tram";
         break;
      }
      case 8: {
         cout << "Tam tram";
         break;
      }
      case 9: {
         cout << "Chin tram";
         break;
      }
   }
   switch (chuc){
      case 1: {
         cout << "muoi ";
         break;
      }
      case 2: {
         cout << "hai muoi ";
         break;
      }
      case 3 :{
         cout << "ba muoi ";
         break;
      }
      case 4 :{
         cout << "bon muoi ";
         break;
      }
      case 5 :{
         cout << "nam muoi ";
         break;
      }
      case 6 :{
         cout << "sau muoi ";
         break;
      }
      case 7 :{
         cout << "bay muoi ";
         break;
      }
      case 8 :{
         cout << "tam muoi ";
         break;
      }
      case 9 :{
         cout << "chin muoi ";
         break;
      }
   }
   switch (dv){
      case 1:{
         cout << "mot";
         break;
      }

      case 2:{
         cout << "hai";
         break;
      }

      case 3: {
         cout << "ba";
         break;
      }
      case 4:{
         cout << "bon";
         break;
      }
      case 5:{
         cout << "nam";
         break;
      }
      case 6: {
         cout << "sau";
         break;
      }
      case 7:{
         cout << "bay";
         break;
      }
      case 8:{
         cout << "tam";
         break;
      }
      case 9: {
         cout << "chin";
         break;
      }

   }
   return 0;
}

