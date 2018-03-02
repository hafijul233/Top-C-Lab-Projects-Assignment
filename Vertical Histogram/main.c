#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    //freopen("input.txt","r",stdin);
    int range,i,j,max=-1,bars;

    printf("\tVertical Histogram Generator\n");
    printf("\t============================\n");

      printf("Enter number of inputs: ");
      scanf("%d",&range);
      printf("Enter %d values: ",range);

      int values[range];
      for(i=0;i<range;i++){
          scanf("%d",&values[i]);
        }

      printf("\n\n\n");
      system("color 0A");

      for(i=0; i<range;i++){

          printf("%8d %c",values[i],(char)179);
          if(max<values[i]) max = values[i];

        for(j=0;j<values[i];j++){

          printf("%c",(char)219);
        }
        printf("\n");
      }

      printf("\t %c",195);
      for(i=1; i<=max; i++){

        if(i%10==0) printf("%c",(char)194);

        else printf("%c",(char)196);
      }

    return 0;
}
