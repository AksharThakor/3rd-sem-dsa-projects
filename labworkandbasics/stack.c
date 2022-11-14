// understanding stack
#include<stdio.h>
#include<stdbool.h>

// global declaration
char s[5];
int tos=-1;

// function declaration
bool isempty(char ar[]);
void push(char ar[] , char a,size_t arraysize);
char pop(char ar[]);



bool isempty(char ar[])
{
    if(tos==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(char ar[],char a,size_t arraysize)
{
    if(tos==arraysize-1)
    {
        printf("but The given stack is full\n\n");
        return;
    }
    else
    {
        tos=tos+1;
        ar[tos]=a;
    }

}

char pop(char ar[])
{
    if(tos==-1)
    {
        printf("The given stack is empty\n\n");
        return 0;
    }

    else
    {
        return ar[tos--];
    }
}

int main()
{
    printf ("\n\nstack manipulation according to given code gives this output\n\n");
    int n=sizeof(s);
    printf("first pop command \n");
    pop(s);
    printf("push 1 for a\n");
    push(s,'a',n);
    printf("push 2 for b\n");
    push(s,'b',n);
    printf("push 3 for c\n");
    push(s,'c',n);
    printf("push 4 for d\n");
    push(s,'d',n);
    printf("push 5 for e\n");
    push(s,'e',n); 
    printf("push 6 for f\n");
    push(s,'f',n); 

    printf("after insertion of all elements returning every element from last in to first in order \n");
    printf("%c\n",pop(s));
    printf("%c\n",pop(s));
    printf("%c\n",pop(s));
    printf("%c\n",pop(s));
    printf("%c\n",pop(s));
    printf("\ntrying  pop command after empty\n\n");
    printf("%c\n",pop(s));
    printf("%c\n",pop(s));
    return 0;
}
