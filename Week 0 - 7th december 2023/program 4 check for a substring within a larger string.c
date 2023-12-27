#include <stdio.h>
#include <string.h>
int check_substring(char s[],char substring[])
{
    int run,run2;
    for(run=0;run<strlen(s);run++)
    {
        char x[50]="";
        for(run2=run;(run2<strlen(s) && strlen(x)<=strlen(substring));run2++)
        {
            x[run2-run]=s[run2];
            if(strcmp(x,substring)==0)
                return(1);
        }
    }
    return(0);
}
void main()
{
    char s[50],substring[50];
    printf("Enter a string ");
    scanf("%s",s);
    printf("Enter a substring ");
    scanf("%s",substring);
    if(check_substring(s,substring)==1)
        printf("The substring %s is present in %s",substring,s);
    else
        printf("The substring %s is not present in %s",substring,s);
    printf("\n\n");
    return(main());
}
