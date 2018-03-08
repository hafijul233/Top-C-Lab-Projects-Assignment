#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[1000000];
    int length,count_space = 0;
    printf("\t\tBinary 1's and 0's Counter\n");
    printf("\t\t==========================\n");

      printf("Enter a Binary String: ");
      gets(text);
      length = strlen(text);

        while(length--){
          if((int)text[length] == 32) count_space++;
        }

        printf("Total Number of Whitespace on this string : %d\n",count_space);

    return 0;
}
