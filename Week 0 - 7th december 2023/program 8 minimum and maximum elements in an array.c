#include <stdio.h>
void min_max(int l[],int length,int result[2])
{
    int min=l[0],max=l[0],run;
    for(run=0;run<length;run++)
    {
        if(l[run]<min)
            min=l[run];
        if(l[run]>max)
            max=l[run];
    }
    result[0]=min;
    result[1]=max;
}
void main()
{
    int length,run,result[2];
    printf("Enter the number of elements in the array ");
    scanf("%d",&length);
    int l[length];
    printf("Enter the elements of the array\n");
    for(run=0;run<length;run++)
        scanf("%d",&l[run]);
    min_max(l,length,result);
    printf("The minimum element of the array is %d and the maximum element of the array is %d",result[0],result[1]);
}
