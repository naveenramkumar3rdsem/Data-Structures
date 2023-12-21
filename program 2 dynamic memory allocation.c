#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("Enter the elements for the first integer array. Type 0 when done\n");
    int count=1,run;
    int *arr1=(int*)malloc(1*sizeof(int));
    int *arr2=(int*)calloc(1,sizeof(int));
    while(1)
    {
        scanf("%d",&arr1[count-1]);
        if(arr1[count-1]==0)
            break;
        count=count+1;
        arr1=realloc(arr1,count+1);
    }
    printf("\n\nThe elements of the first array are ");
    for(run=0;run<count;run++)
        printf("%d ",arr1[run]);
    printf("\nEnter the elements for the second integer array. Type 0 when done\n");
    count=1;
    while(1)
    {
        scanf("%d",&arr2[count-1]);
        if(arr2[count-1]==0)
            break;
        count=count+1;
        arr2=realloc(arr2,count+1);
    }
    printf("\n\nThe elements of the second array are ");
    for(run=0;run<count;run++)
        printf("%d ",arr2[run]);
}

