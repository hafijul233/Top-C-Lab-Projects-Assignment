#include <stdio.h>
#include <stdlib.h>

void dectobin(int value){
  char output[100];
  int i, index=0;
  while(value){
    if((value%2)!=0){
      output[index] = '1';
    }
    else{
      output[index] = '0';
    }
    value = value / 2;
    index++;
  }
  printf("Binary value: ");
  index--;
  for(i=index;i>=0;i--){
    printf("%c",output[i]);
  }
  printf("\n");
}

void dectooct(int value){
  char output[100];
  int i, index=0,reminder;
  while(value){
    reminder = value%8;
    reminder+=48;

    output[index] = (char)reminder;
    value = value / 8;
    index++;
  }
  printf("Octal value: ");
  index--;
  for(i=index;i>=0;i--){
    printf("%c",output[i]);
  }
  printf("\n");

}
int dectohex(int value){
  char output[100];
  int i, index=0,reminder;
  while(value){
    reminder = value%16;

    if(reminder<=9)reminder += 48;
    else reminder += 55;

    output[index] = (char)reminder;
    value = value / 16;
    index++;
  }
  printf("Hexa value: ");
  index--;
  for(i=index;i>=0;i--){
    printf("%c",output[i]);
  }
  printf("\n");

}

int main()
{
    int decimal = 0;

    printf("\tBase Converter\n");
    printf("\t===============\n");
    printf("Enter a Decimal Number: ");
      scanf("%d",&decimal);

      dectobin(decimal);
      dectooct(decimal);
      dectohex(decimal);

    return 0;
}
