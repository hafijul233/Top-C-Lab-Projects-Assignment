#include <stdio.h>
#include <stdlib.h>

char singles[][9] = {"zero","one","two","three","four","five",
                    "six","seven","eight","nine","ten","eleven",
                    "twelve","thirteen","fourteen","fifteen","sixteen",
                    "seventeen","eighteen","nineteen","twenty"};

char multpliers[][7] = {"twenty","thirty","forty","fifty",
                       "sixty","seventy","eighty","ninety"};



int main()
{
    int number,reminder,result;
    printf("\t\tNumbers Teller\n");
    printf("\t\t==============\n");
      printf("Enter a Number: ");
      scanf("%d",&number);

      printf("It is called \"");

      if(number >= 0 && number<=20){
        printf("%s\"",singles[number]);
      }

      else if(number>20 && number<=99){
        result = (number/10)-2;
        reminder = number%10;
          printf("%s %s\"",multpliers[result],singles[reminder]);
      }

      printf("\n");
    return 0;
}
