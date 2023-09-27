#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int count[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        char c =s[i];
        if (c>='a' && c<= 'z')
        {
            count[c -'a']++;
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",'a'+ i,count[i]);
    }
    
    
    return 0;
}