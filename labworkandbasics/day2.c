// program for  cchecking  wetthher a stringg is  ppelindrome or not usinng arrray
#include<stdio.h>
#include<string.h>

void main()
{
 char s;
 printf("Enter string you want to ckeck");
 scanf("%s",&s);
 isPalindrome(s);
}

void isPalindrome(char str[])
{
  int h = strlen(str) -1;
  int l = 0;

  while (l<h)
  {
    if((l++) != (h--))
    {
        printf("not a pelindrome");
        break;
    }
  }
  printf("Is pelindrome");
}

