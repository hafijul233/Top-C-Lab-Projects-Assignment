#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char binary[1000000];
    int length,count_1 = 0, count_0 = 0;
    printf("\t\tBinary 1's and 0's Counter\n");
    printf("\t\t==========================\n");

      printf("Enter a Binary String: ");
      gets(binary);
      length = strlen(binary);

        while(length--){
          if(binary[length] == '1') count_1++;
          if(binary[length] == '0') count_0++;
        }

        printf("Total Number of 1's: %d\n",count_1);
        printf("Total Number of 0's: %d\n",count_0);

    return 0;
}
