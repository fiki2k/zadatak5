// Zadatak je pronaci faktorijel zadanog broja.

#include<stdio.h>
int main(){
  int i,f=1,broj;
  
  //Korisnik unosi broj.
  printf("Unesi broj: ");
  scanf("%d",&broj);
 
  //U for-petlji se racuna faktorije unesenog broja.
  for(i=1;i<=broj;i++){ 
      f=f*i;
}
  printf("Faktorijel broja %d je: %d",broj,f);
  return 0;
}
