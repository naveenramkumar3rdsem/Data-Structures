#include <stdio.h>
#include <string.h>
void main()
{
    int n,run,run2,letter;
    printf("Enter the number of words ");
    scanf("%d",&n);
    char arr[n][50];
    printf("Enter the words you wish to sort lexicographically\n");
    for(run=0;run<n;run++)
        scanf("%s",arr[run]);
    for(run=0;run<n-1;run++)
    {
        int low=run;
        for(run2=run+1;run2<n;run2++)
        {
            letter=0;
            while(1)
            {

                if(arr[run2][letter]<arr[run][letter])
                {
                    char temp[50];
                    strcpy(temp,arr[run]);
                    strcpy(arr[run],arr[run2]);
                    strcpy(arr[run2],temp);
                    break;
                }
                if(arr[run2][letter]>arr[run][letter])
                    break;
                letter=letter+1;
            }
        }
    }
    printf("\n\nThe sorted list of words is:\n");
    for(run=0;run<n;run++)
        printf("%s\n",arr[run]);
    printf("\n\n....................................................................\n\n");
    return(main());
}
