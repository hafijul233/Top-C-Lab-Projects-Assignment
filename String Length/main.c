#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char text[10000];
  int counter = 0;

    printf("\tString Length ALgorithm\n");
    printf("\t=======================\n");
    printf("\t\tBasic Technique\n");
    printf("\t\t---------------\n");

    printf("Enter String with / without whitespace: ");
      gets(text);
      while(text[counter] != '\0'){//'\0' stands for NULL character
        counter++;
      }
        //counter = strlen(text); //built-in function for character array in c

    printf("Inserted String Length: %d\n",counter);
      puts(text);
    return 0;
}
