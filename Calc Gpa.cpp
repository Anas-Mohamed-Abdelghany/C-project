#include <stdio.h>
#include <string.h>
float grade_to_gpa(char grade[]) {
    if (strcmp(grade, "A+") == 0) return 4.0;
    if (strcmp(grade, "A") == 0) return 4.0;
    if (strcmp(grade, "A-") == 0) return 3.7;
    if (strcmp(grade, "B+") == 0) return 3.3;
    if (strcmp(grade, "B") == 0) return 3.0;
    if (strcmp(grade, "B-") == 0) return 2.7;
    if (strcmp(grade, "C+") == 0) return 2.3;
    if (strcmp(grade, "C") == 0) return 2.0;
    if (strcmp(grade, "C-") == 0) return 1.7;
    if (strcmp(grade, "D+") == 0) return 1.3;
    if (strcmp(grade, "D") == 0) return 1.0;
    if (strcmp(grade, "F") == 0) return 0.0;
    return 0 ;
}
int main() {
    int n;
    int how , check2 ;
    printf ("in which way you want to calculate your GPA\n1) By grades 2) By Points\n");
    scanf("%d",&how);
    if(how == 1){
	printf("How many subjects do you want to calculate? ");
    scanf("%d", &n);
    int hours[n];
    char grades[n][3];
    float gpa[n];
    float calc[n];
    float sum = 0;
    int total_hours = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter the hours and grade (EX. A | B+ | C-) for subject #%d respectivly: ", i + 1);
        scanf("%d %s", &hours[i], grades[i]);
        gpa[i] = grade_to_gpa(grades[i]);
        calc[i] = gpa[i] * hours[i];
        total_hours += hours[i];
        sum += calc[i];
    }
    float final_gpa = sum / total_hours;
    printf("The final GPA = %.2f\n", final_gpa);
   	}
   	else {
   		printf ("do you wanna calculate for\n1)subject point 2) By Total Points\n");
   		scanf ("%d",&check2);
   		if (check2 == 1){
   			float sub_poi[n] ,totpop , ho;
   				printf("How many subjects do you want to calculate? ");
                scanf("%d", &n);
     				printf("enter the points\n");              
                for(int i =0 ; i<n;i++){
                	scanf("%f",&sub_poi[i]);
                totpop += sub_poi[i];	
				}
				printf("How many Hours of subjects ");
				scanf("%f",&ho) ;
				float GPA = totpop/ho ;
				    printf("The final GPA = %f", GPA);
		   }
		   else {
		   	float totpo , ho ;
		   	printf(" What is the total points & Hours \n");
		   	scanf ("%f%f",&totpo,&ho);
		   	float GPA = totpo/ho ;
		   	printf("The final GPA = %f",GPA);
		   }
	   }
}