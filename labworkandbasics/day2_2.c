// from string if char A is given then, all A needs tobe removed and rest char in str 
// needs to be shifted leftwards

#include<stdio.h>
#include<string.h>

void stredit(char str[])
{
    char s;
    printf("Enter which char you want to delete from string");
    scanf("%c",&s);
    int h=strlen(str);
    
    
    int f=0;
	for(int l=0;l<=strlen(str)-1;l++)
    {
        if (str[l]==s)
        {f=f+1;}

    }
	if (f==0){printf("No such char in str");
              
              }
	char nstr[strlen(str)-f];

    for(int l=0;l<=strlen(str)-1;l++)
    {
        if (str[l]=s)
        {
            if (l<strlen(str))
            {
                str[l]=str[l+1];
            }
        }
    } 
	int n=0;
    for(int i=0;i<=strlen(str)-f;i++)
    {
        nstr[n]=str[i];
        n=n+1;
    }
  printf("%s",nstr[strlen(str)-f]);
}

void main()
{
    char str[100];
    gets(str);
    stredit(str);

}