#include <stdio.h>

void bcd(int firstNumber, int secondNumber){
  if(firstNumber%secondNumber == 0){
    printf("The biggest common denominator is: %d\n",secondNumber);
    return;
  }
  bcd(secondNumber,firstNumber%secondNumber);
}

int main(){
  int x,y;
  printf("\n\nThe first number you will enter must be biger then the second number\n\n");
  printf("Enter the first number: ");
  scanf("%d",&x);
  printf("Enter the second number: ");
  scanf("%d",&y);
  printf("\n");
  bcd(x,y);
}
