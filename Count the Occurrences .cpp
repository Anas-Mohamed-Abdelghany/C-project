/*this code Count the Occurrences in code*/
#include <stdio.h>
	int n = 5;
	int number ;
	int occ = 0 ;
    bool c = true ;
int count ( int x[] ){
	  for (int z = 0; z < n; z++) {
        if(x[z]==number){
        	occ = occ + 1 ;
		}
	}
	return occ ;
}
int main() {
	printf("if you wanna stop programme tap 0000 \n") ;
int x[n];
while (c==true) {
	    printf("Please input 5 integer numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[i]== 0000 ) {
	c=false ;
	break ;
     }
    }
    if (c == true) {
    printf("Tell me the number to count how many times in array :\n");
    scanf ("%d" , &number) ;
    printf("The number is : %d \nits occurrences is : %d \n \n", number , count(x) );
    }
  }
}
