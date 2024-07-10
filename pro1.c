#include<stdio.h>
#include<stdlib.h>

int main ()
{   
    int y[5];
    int x[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter a (%i) number : ",i+1);
        scanf("%d",&y[i]);

    }
    printf("....................\n");
    printf("the new array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter a (%i) number : ",i+1);
        scanf("%d",&x[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        printf("the multiblication of %d * %d =%d\n",x[i],y[i],x[i]*y[i]);
    }
    

    

    return 0;
}
