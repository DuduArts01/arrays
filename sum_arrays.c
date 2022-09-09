#include <stdio.h>

int main(void){
  int A[2][2] = {{5,4}, 
                 {3,-2}};

  int B[2][2] = {{0, 2},
                 {4, -6}};
  
  int C[2][2];
  printf("|| ");  
  for(int m = 0; m < 2; ++m ){
    for(int n = 0; n < 2; ++n ){
      C[m][n] = A[m][n] + B[m][n];      
      if((m == 1) && (n < 1)){
        printf("   ");
      }
      printf("%i  ", C[m][n]);    
      if ((n == 1) && (m < 1)) {
        printf("\n");
      }
    }
  }
  printf("||\n");
  return 0;
}
