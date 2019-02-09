#include<stdio.h>
#include<string.h>
int main()
{
    char d;
    scanf("%c",&d);
    if((d>='a'&& d<='z')||(d>='A' && d<='Z'))
    {

        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
