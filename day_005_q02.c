/* Name = Arpan Kumar Bartia
   section= E
   branch= CSE
   reg no= 2041002035
*/
#include<stdio.h> 
#include<math.h>
int main()
{
 	float wt_lb,ht_in;
	printf("Enter the weight in pounds:\n");
	scanf("%f",&wt_lb);
	printf("Enter the height in inches:\n");
	scanf("%f",&ht_in);
	float BMI=(703*wt_lb)/(pow(ht_in,2));
	if(BMI<18.5)
	printf("Undreweight");
	else if(BMI>=18.5 && BMI<=24.9)
	printf("Normal");
	else if(BMI>25.0 && BMI<=29.9)
	printf("Overweight");
	else
	printf("Obese");
	
	return(0);
}
