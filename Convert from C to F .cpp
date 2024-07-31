#include <stdio.h>
	double heat , celiesis , fehrenhit ;
void convert (double heat)
{
		if (heat == 1)
	{
		printf ("input celiesis temp\n");
			scanf ("%lf",&celiesis) ;
			double temp = (celiesis * 1.8 ) + 32 ;
			   printf ("the equivilent heat in F = %lf", temp);
	}
	if (heat== 2) 
	{
		printf ("input fehrenhit temp\n");
			scanf ("%lf",&fehrenhit) ;
				double temp = (fehrenhit -32 )/1.8 ;
				  printf ("the equivilent heat in C = %lf", temp );
	}
}
int main (){
	printf ("press 1 if you wanna convert from C to F\n");
	printf ("press 2 if you wanna convert from F to C\n");
	scanf ("%lf",&heat) ;
    convert (heat);
}
