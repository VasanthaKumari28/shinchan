#include<string.h>
int main()
{
    char d;
    scanf("%c",&d);
    if((d>='a'&& d<='z')||(d>='A' && d<='Z'))
    {

    if(d=='a'||d=='e'||d=='i'||d== 'o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
