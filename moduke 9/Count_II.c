// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[100001];
//     int v = 0;
//     scanf("%s", s);
//     for(int i = 0; i < strlen(s); i++) 
//     {
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
//         {
//             v++;
//         }
//     }
//     printf("%d",v);
    
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int v=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='o')
        {
            v++;
        }
        
    }
    printf("%d",v);
    return 0;
}