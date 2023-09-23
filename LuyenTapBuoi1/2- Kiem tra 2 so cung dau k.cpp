#include <stdio.h>
#include <math.h>

int main(){
   int a,b,tich;
  printf(" Moi nhap a : ");
   scanf("%d", &a);
  printf(" Moi nhap b : ");
  scanf("%d", &b);
   if (a > 0 and b > 0){
     printf( "TH1: Hai so cung dau");
   } else if (a < 0 and b < 0){ 
      printf( "TH2: Hai so cung dau");
   } else if (a > 0 and b < 0){
     printf( "TH3: Hai so vua nhap trai dau");
   } else if (a < 0 and b > 0)
   {
     printf( "TH4: Hai so vua nhap trai dau");
   }
   else {
      printf( "TH5: Hai so vua nhap khong hop le !");
   }
   
   return 0;
}
