#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("enter a number for multiblication : ");
    scanf("%d",&a);
    printf("the multiblication of (%d)is\n",a);
    for (int  i = 1; i <= 12; i++)
    {
        printf(" %d*%d=%d\n",a,i,i*a);
    }
    

}
