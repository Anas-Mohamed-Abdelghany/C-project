#include <stdio.h>
#include <math.h>
int count ;
int number ;
int z = 1 ;
int main () {
		printf("if you wanna stop programme tap 00 \n") ;
	while (z==1) {
	printf("\nthe number you wanna convert to binary is :\n");
	scanf("%d",&number);
	if (number==00){ 
			printf("thanks for use this programme") ;
		break;}
		int c = 1 ;
	for (int i = 0 ; i < 50 ; i++)
	{
		if ( number < c ){
		count = i ;
		break;
		}
		else {
			c = c * 2 ;
		}
	}
	printf ("the number %d can be represented in %d bits\n",number,count);
	printf("the number in bunary is : ");
    int power = pow(2 ,count - 1);
	for ( int i = 0 ; i < count ; i++ ){
		if (number >= power ) {
			printf("1");
			number = number - power ;
		}
		else {
			printf("0");
		}
		power = power / 2 ;
        	}
    	}
  }

