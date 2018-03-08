#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,max_value = -1,row,col,pos_i,pos_j;

    printf("\t\tLargest element of an Matrix\n");
    printf("\t\t============================\n");
      printf("\tEnter Row & Column of matrix: ");
        scanf("%d %d",&row, &col);

        printf("We assume there will be only positive number.\n");

        int elements[row][col];
        printf("Enter %d elements of matrix:\n ",row*col);
        for(i = 0;i<row; i++){
          for(j = 0; j<col; j++){
            scanf("%d", &elements[i][j]);

            if(max_value<elements[i][j]){
              max_value = elements[i][j];//search the max value from input
              pos_i = i;
              pos_j = j;
            }
          }
        }
        printf("The Largest Element = %d\nElement Position Row: %d\t Column: %d\n",max_value,pos_i+1,pos_j+1);
    return 0;
}
