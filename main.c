#include <stdio.h>

int main(void) {
  int a;
  int b;
  printf("Podaj pierwszy bok: \n");
  scanf("%d",&a);
  printf("Wprowadź drugi bok: \n");
  scanf("%d",&b);
  int pole;
  pole=a*b;
  
  if (a==b){
    printf("Pole kwadratu wynosi: %d",pole);
  }
  else{
    printf("Pole prostokąta wynosi: %d",pole);
  }
  return 0;
}