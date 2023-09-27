#include <stdio.h>
#include <string.h>

int main() {
    char X[1000], Y[1000];
    scanf("%s%s", X, Y);
    int lenX = strlen(X);
    int lenY = strlen(Y);

    for(int i=0; i<lenX && i<lenY; i++) 
    {
        if(X[i] < Y[i]) 
        {
            printf("%s\n", X);
            return 0;
        } 
        else if(X[i] > Y[i])
        {
            printf("%s\n", Y);
            return 0;
        }
    }
    if(lenX < lenY) 
    {
        printf("%s\n", X);
    } 
    else {
        printf("%s\n", Y);
    }
    
    return 0;
}
