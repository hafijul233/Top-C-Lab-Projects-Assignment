#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


char singles[][9] = {"zero","one","two","three","four","five",
                    "six","seven","eight","nine","ten","eleven",
                    "twelve","thirteen","fourteen","fifteen","sixteen",
                    "seventeen","eighteen","nineteen"};

char decades[][7] = {"twenty", "thirty", "forty", "fifty",
                       "sixty", "seventy", "eighty", "ninety"};



void single(int number){
  printf("%s",singles[number]);
}

void and_single(int number){
  printf("and %s",singles[number]);
}

void decade(int number){

    int result,reminder;

    result = (number/10)-2;
    reminder = number %10;

    if(reminder==0){
        printf("%s",decades[result]);
    }

    else{
        printf("%s ",decades[result]);
        single(reminder);
    }
}

void hundred(int number){
    int result,reminder;

    result = (number/100);
    reminder = number %100;

    if(reminder == 0){
        printf("%s hundred",singles[result]);
    }

    else if(reminder > 0 && reminder <= 9){
        printf("%s hundred ",singles[result]);

        and_single(reminder);
    }

    else{
        printf("%s hundred ",singles[result]);
        decade(reminder);
    }
}

void thousand(int number){
    int result,reminder;

    result = (number/1000);
    reminder = number %1000;

    if(reminder == 0){
        printf("%s thousand",singles[result]);
    }

    else if(reminder > 0 && reminder <= 9){
        printf("%s thousand ",singles[result]);

        and_single(reminder);
    }

    else{
        printf("%s thousand ",singles[result]);
        hundred(reminder);
    }
}

void hundred_thousand(int number){
    int result, reminder;

        result = number/1000;
        if(result>9 && result<=19){
            single(result);
        }
        else decade(result);//Ex:/*19*/,999

            printf(" thousand ");

        reminder = number%1000;
            hundred(reminder);//Ex:19,/*999*/

}


int main()
{
    int number,choice;
    while(1){
        system("cls");
        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0A );
        printf("\t\tNumbers Teller\n");
        printf("\t\t==============\n");

        printf("Enter a Number: ");
            scanf("%d",&number);

        if(number > 2147483645){
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x9C );
            printf("The %d is Out of Range\n",number);
            Sleep(1000);
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0A );
        }
        else{
            printf("It is called: ");
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0C );

            if(number<0){
               number=number*(-1);
                printf("minus \"");
            }
            else{
                printf("\"");
            }

            if(number >= 0 && number<=19)
                single(number);

            else if(number> 19 && number <=99)
                decade(number);

            else if(number > 99 && number <= 999)
                hundred(number);

            else if(number> 999 && number <=9999)
                thousand(number);

            else if(number>9999 && number)
                hundred_thousand(number);

            printf("\"\n");

            // retry program
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0A );
            printf("Do you want to run program again(1/0): ");
            scanf("%d",&choice);

            if(choice ==1)
                continue;
            else if(choice == 0)
                break;
        }
    }
    return 0;
}
