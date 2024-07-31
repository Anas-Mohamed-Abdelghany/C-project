#include <stdio.h>
int n ;
float average (float z[]){
	float av = 0 ;
		for (int i = 0 ; i < n ; i++)
	{
		av = av + z[i] ;
	}
	return (av/n) ;
}
int main () {
	printf ("please type the number of elemnts \n");
	scanf("%d",&n);
	printf ("please enter %d nembers :\n" , n);
	float z [n] ;
	for (int i =0 ; i < n ; i++)
	{
		scanf("%f",&z[i]);
	}
	printf ("the average of elements = %f" , average(z)) ;
	system("pause") ;
}
