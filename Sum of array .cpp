#include <stdio.h>
	int n ;
int sumup (int z[]){
	int sum = 0 ;
	for (int i =0 ; i < n ; i++)
	{
		sum = sum + z[i] ;
	}	
	return (sum);
}
int main (){
	printf ("please type the number of elemnts \n");
	scanf("%d",&n);
	printf ("please enter %d nembers :\n" , n);
	int z [n] ;
	for (int i =0 ; i < n ; i++)
	{
		scanf("%d",&z[i]);
	}
	printf ("the sum of elements = %d" , sumup(z)) ;
}
