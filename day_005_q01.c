/* Name = Arpan Kumar Bartia
   section= E
   branch= CSE
   reg no= 2041002035
*/
#include<stdio.h> 
int main()
{
	float total,sales_tax,net;
	printf("Total Purchases:\n");
	scanf("%f",&total);
	if(total>100.0)
	{
	float d=total*0.12;
	printf("Teacher's discount (12%%) %f\n",d);
	printf("Discounted total %f\n",total-d);
	sales_tax=0.05*(total-d);
	printf("sales tax %f\n",sales_tax);
	net=(total-d)+sales_tax;
	printf("Total %f\n",net);
	}
	else
	{
	sales_tax=0.05*(total);
	printf("sales tax(5%%) %f\n",sales_tax);
	net=total+sales_tax;
	printf("Total %f\n",net);
	}
	
	
return(0);
}
