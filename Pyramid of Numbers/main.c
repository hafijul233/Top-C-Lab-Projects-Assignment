#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, j, k;
    printf("\t\tPyramid of Numbers\n");
    printf("\t\t==================\n");
      printf("Enter Number of Rows: ");
      scanf("%d",&row);
      printf("\n\n");
      for(i=1; i<=row; i++){

        for(j=1; j<=row; j++) printf(" ");
        for(j=1; j<=row; j++) printf(" ");

        printf("\n");
      }
    return 0;
}
