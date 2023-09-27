// #include <stdio.h>
// #include <math.h>

// int main() {
//     int M1, M2, D;
//     float days;
    
//     scanf("%d %d", &M1, &D);
    
//     scanf("%d", &M2);
    
//     days = (float)(M1 * M2) / (float)(D);
//     printf("%d\n", M2);

    
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int M1, M2, D;
//     scanf("%d%d%d", &M1, &M2, &D);
    
//     int days = ceil((double)(M1*D)/(double)M2);
//     printf("%d\n",days);
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int M1, M2, D;
    scanf("%d%d%d", &M1, &M2, &D);
    double days = 1.0 * M1 * D / M2;
    printf("%d\n", (int)days);
    return 0;
}
