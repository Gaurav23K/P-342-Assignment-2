/*Assignment 2
  Problem 2*/
  
#include<stdio.h>
int main(){
	//vectors A and B
	int A[3]={2, 5, 6};
	int B[3]={3, 8, 1};
	int C[3] = {0, 0, 0};
	int D=0;
	//A*B
	for(int i=0;i<3;i++){
		D+=A[i]*B[i];
	}
	printf("The dot product A.B is: %d",D);
	//A+B
	printf("\nThe sum A+B is: \n [");
		for(int j=0;j<3;j++){
		C[j]=A[j]+B[j];
		printf("%d",C[j]);
		printf(" ");
		                    }
    printf("]");   
	return 0;
}
