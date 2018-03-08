#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, siz, temp;

  printf("\tArray Sorting Algorithm\n");
  printf("\t=======================\n");
  printf("\t\tDescending Order Bubble Sorting\n");
  printf("\t\t--------------\n");
    printf("Enter Size of Array: ");
      scanf("%d",&siz);

    printf("Enter %d numbers: ",siz);
    int elements[siz];

      for(i = 0; i<siz; i++){
        scanf("%d",&elements[i]);
      }
      // loop will start from second Index and compare with previous one
    for(i=0; i<siz-1; i++){
      // second loop will find the position of number
      for(j =0; j<siz-i-1; j++){
        // Ex: elements[0] small then elements[1] then swap their values
        if(elements[j] < elements[j+1]){
          temp = elements[j];
          elements[j] = elements[j+1];
          elements[j+1] = temp;
          }
      }
    }

    for(i=0; i<siz; i++){
      printf("%d ",elements[i]);
    }
    return 0;
}
