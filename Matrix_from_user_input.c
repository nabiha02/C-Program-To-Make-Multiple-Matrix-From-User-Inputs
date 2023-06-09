//Making multiple matrix from user input

#include <stdio.h>

int main(void){

  int A[100][100],B[100][100],i,j,no_row,no_col;

  printf("Input your no_row: ");
  scanf("%d", &no_row);
  printf("Input your no_col: ");
  scanf("%d", &no_col);

  //scanning A martrix
  printf("Enter elements for A matrix\n");
  for(i=0;i<no_row;i++){

    for(j=0;j<no_col;j++){

      printf("A[%d][%d] = ", i,j);
      scanf("%d", &A[i][j] );
    }   
  }

  //printing A martrix
  printf("A = ");
  for(i=0;i<no_row;i++){

    printf("\t");
    for(j=0;j<no_col;j++){

        printf("%d ", A[i][j]);
    }

    printf("\n");

  }

  //scanning B martrix
  printf("Enter elements for B matrix\n");
  for(i=0;i<no_row;i++){

    for(j=0;j<no_col;j++){

      printf("B[%d][%d] = ", i,j);
      scanf("%d", &B[i][j] );
    }   
  }

  //printing B martrix
  printf("B = ");
  for(i=0;i<no_row;i++){

    printf("\t");
    for(j=0;j<no_col;j++){

        printf("%d ", B[i][j]);
    }

    printf("\n");

  }

}
