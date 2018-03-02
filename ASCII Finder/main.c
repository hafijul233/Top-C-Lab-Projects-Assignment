#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i,length;

    printf("\t\tASCII VALUE FINDER\n");
    printf("\t\t==================\n");
      printf("Enter A String: ");
      gets(string);

      length = strlen(string);
      for(i=0; i<length; i++){
        printf("ASCII Value of \"%c\" is %d\n",string[i],(int)string[i]);
      }

    return 0;
}
