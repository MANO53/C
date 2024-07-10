#include<stdio.h>
int main(){
    int y [5];
    int sum= 0;
    for(int i =0 ; i<5 ;i++){
        printf("............. %d..==))> : ",i+1);
        scanf("%d",&y[i]);
        sum+=y[i];

    }
    int max;
    for (int  i = 0; i < 5; i++)
    {
        
       if (y[i]>max)
       {
            max=y[i];
       }
       
    }
    int min;
    for (int i = 0; i < 5; i++)
    {
        if (y[i]<min)
        {
           min=y[i];
        }
        
    }
    printf(" the min is  : %d\n",min);

    
    printf(" the max is  : %d\n",max);

    
    printf(" the sum is : %d\n",sum);

}