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
  index--;
  for(i=index;i>=0;i--){
    printf("%c",output[i]);
  }
  printf("\n");
}

void dectooct(int value){
  char output[100];
  int i, index=0;
  while(value){
    if((value%8)!=0){

      output[index] = '1';
    }
    else{
      output[index] = '0';
    }
    value = value / 2;
    index++;
  }
  index--;
  for(i=index;i>=0;i--){
    printf("%c",output[i]);
  }
  printf("\n");

}
int dectohex(int value){


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
