#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = NULL;
    size_t len = 0;
    size_t read;
    
    read = getline(&s, &len, stdin); 

    for (int i = 0; i < read; i++) 
    {
        if (s[i] == '\\') 
        {
            s[i] = '\0'; 
            break;
        }
    }

    printf("%s\n", s); 

    // free(s); 


    return 0;
}
