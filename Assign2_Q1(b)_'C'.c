/*Assignment 2
 Problem 1(b)*/
 
#include<stdio.h>
#include <stdlib.h>
int main(){
	//(i,j) is first point & (k,z) is second point.
	int i =0;
	int j =0;
	int k =0;
	int z =0;
	int max=5;
	float no=0;
	float distance =0;
	//mapped from 1 to 6
	while(j<=max){
		i=0;
		while(i<=max){
			z=0;
			while(z<=max){
				k=0;
				while(k<=max){
					distance+=abs(k-i)+abs(z-j);
					no+=1;
					k+=1;
				}
				z+=1;
			}
			i+=1;
		}
		j+=1;
	}
	
printf("Total distance is: %lf",distance);
float average = distance/no;
printf("\nThe average distance is: %lf", average);
return 0;
}
