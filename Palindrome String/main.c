#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100],temp[100];
    int i,length;
    printf("\tPalindrome String Tester\n");
    printf("\t========================\n");
      printf("Enter String: ");
        scanf("%s",text);
      printf("Entered String: \"%s\"\n",text);

      length = strlen(text);
      for(i=0; i<length; i++){
        temp[length-i-1] = text[i];
      }

      printf("Reversed String: \"%s\"\n",temp);

      if(strcmp(text,temp)==0){
        printf("\"%s\" is a Palindrome String\n",text);
      }
      else{
        printf("\"%s\" is not a Palindrome String\n",text);
      }
    return 0;
}
