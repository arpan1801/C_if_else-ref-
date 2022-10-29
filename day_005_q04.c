/* Name = Arpan Kumar Bartia
   section= E
   branch= CSE
   reg no= 2041002035
*/
#include<stdio.h> 
int main()
{
char ch;
printf("Enter the ritcher scale level(A,B,C,D,E)");
scanf("%c",&ch);
switch(ch)
{
case 'A':
printf("Little or no damage\n");
break;
case 'B':
printf("Some damage\n");
break;
case 'C':
printf("Serious damage: walls may crack or fall \n");
break;
case 'D':
printf("Disaster: houses and buildings may collapse\n");
case 'E':
printf("Catastrophe: most buildings destroyed\n");

}
return(0);
}
