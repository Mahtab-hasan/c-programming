#include <stdio.h>

// 1. Has Return + Parameter.
int s(int a, int b) 
{
    return a + b;
}


// 2. Has Return + No Parameter.
float p() 
{
    return 3.1416;
}


// 3. No Return + Parameter.
void pntSum(int a, int b) 
{
    printf("Sum: %d\n", a + b);
}


// 4. No Return + No Parameter.
void say_Helko()
 {
    printf("say_helko , ha ha ha ha\n");
}


int main() 
{
    int sum = s(5, 7);
    printf("Sum er 5+7 = %d\n", sum);
    
    float pi = p();
    printf("p er value holo : %0.4f\n", pi);
    
    pntSum(20, 30);
    
    say_Helko();
    
    return 0;
}
