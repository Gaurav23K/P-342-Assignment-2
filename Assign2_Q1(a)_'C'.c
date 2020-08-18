/* Assignment 2
   Problem 1(a)*/
   
#include<stdio.h>
#include<stdlib.h>
int main(){
	// "j" is the point of reference, "i" is the random point.
	int points = 0;
	int max = 5;
	double i = 0;
	double j = 0;
	double distance = 0;
	while (j<=max){
		int i=0;
		while (i<=max){
			distance+=abs(i-j);
			points+=1;
			i+=1;
		}
		j+=1;
	
	}
	
	printf("Total distance is ");
	printf("%f",distance);

	printf("\nThe average distance is %lf", distance/points);
	return 0;

         }
