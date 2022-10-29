
/* Name = Arpan Kumar Bartia
   section= E
   branch= CSE
   reg no= 2041002035
*/
#include<stdio.h>

void direction(float);
void heading(float);

int main() {
    float a;
    printf("Enter the compass bearing: ");
    scanf("%f", &a);
    direction(a);
    heading(a);
    return 0;
}

void direction(float a) {
    int k = (int)a;
    switch(k) {
        case 0:
        printf("North\n");
        break;
        case 90:
        printf("East\n");
        break;
        case 180:
        printf("South\n");
        break;
        case 270:
        printf("West\n");
        break;
        case 360:
        printf("North\n");
        break;
    }
}

void heading(float a) {
    float b;
    if(a<90)
    {
        b=90-a;
        printf("East %.2f degrees North\n",b);
    }
    else if(a>90 && a<180)
    {
        b=180-a;
        printf("South %.2f degrees East\n",b);
    }
    else if(a>180 && a<270)
    {
        b=270-a;
        printf("West %.2f degrees South\n",b);
    }
    else if(a>270 && a<360)
    {
        b=360-a;
        printf("North %.2f degrees West\n",b);
    }
}
