#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",s);

    int len = strlen(s);
    int cnt[26]={0};

    for (int  i = 0; i < len; i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        
        if (cnt[i]>0)
        {
            printf("%c : %d\n" , 'a'+i,cnt[i]);
        }
        cnt[i]=0;
        
    }
    
    return 0;
}