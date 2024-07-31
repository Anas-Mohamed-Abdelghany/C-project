/*this code take array and reverse it's elements*/
//another sol.
/*#include <stdio.h>
int n ;
int main () {
	printf ("input the length of array : \n") ;
	scanf ( "%d" , &n) ;
	int x[n];
		printf ("input %d numbers \n" , n) ;
	for(int i = 0 ; i < n ; i++ )
	{
		scanf ( "%d" , &x[i] );
	}
		printf ("the array numbers is : ") ;
		for(int i = 0 ; i < n ; i++ )
	{
		printf ( "%d  " , x[i]);
	}
		for (int z = 0 ; z < (n/2) ; z++)
	{
	int t = x[z] ;
	x[z]=x[n-z-1] ;	
	x[z]= t ;
	}
	printf ("\nthe reversed array is : ") ;
		for(int i =0 ; i < n ; i++ )
	{
		printf ( "%d  " , x[i]  );
}
}
*/
#include <stdio.h>
int n ;
int main () {
	printf ("input the length of array : \n") ;
	scanf ( "%d" , &n) ;
	int x[n];
	int y[n];
		printf ("input %d numbers \n" , n) ;
	for(int i = 0 ; i < n ; i++ )
	{
		scanf ( "%d" , &x[i] );
	}
		printf ("the array numbers is : ") ;
		for(int i = 0 ; i < n ; i++ )
	{
		printf ( "%d  " , x[i]);
	}
		for (int z = n ; z > 0 ; z--)
	{
	y[z-1]=x[n-z] ;	
	}
	printf ("\nthe reversed array is : ") ;
		for(int i =0 ; i < n ; i++ )
	{
		printf ( "%d  " , y[i]  );
}
}
