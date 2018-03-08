#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    unsigned long long fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;
    printf("\t\tImplementation of Fibonacci Series\n");
    printf("\t\t===================================\n");
      printf("\tEnter Nth Position:(1<n<95): ");
        scanf("%d",&n);

        if(n==1){
          printf("Position: %d\tValue: %llu\n",1,fibo[1]);
        }
        else{
          for(i=2; i<=n; i++){
            fibo[i] = fibo[i-1]+fibo[i-2];
            printf("Position: %d\tValue: %llu\n",i-1,fibo[i]);
          }
        }

    return 0;
}
