
// Stock multi input print and value shold be print

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[5];
    int b;
    int i =1; // for running the loop
    float c;
    float total, fulltotal = 0;


    // printf(" \n PRESS 0 TO EXIT THE PROGRAM \n ");
    printf(" INVENTORY REPORT");
    printf(" \n CODE   QUANTITY   RATE   TOTAL \n");
        
    while(i <= 3)
    {
        //printf("Enter Code, Quantity, Rate : ");
        scanf (" %5s", a);
        scanf (" %d", &b);
        scanf (" %f", &c);
        
        total = b * c;
        
        printf(" %-5s   %d   %2.2f   %2.2f \n", a, b, c, total);
        fulltotal = fulltotal + total;
        i++;
    }
    printf("          Total =  %2.2f", fulltotal);
        
}
