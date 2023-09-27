#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for (int i = 1; i <=n; i=i+1)
    {
        scanf("%d",&a);


        if (a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        


        if (a>0)
        {
            pos++;             
        }
        else if (a<0)
        {
            neg++;            
       }  


    }
      printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    return 0;
}



// #include <stdio.h>

// int main() {
//     int n; 
//     scanf("%d", &n);
//     int numbers[n]; 
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &numbers[i]);
//     }

//     // Count numbers
//     int even = 0;
//     int odd = 0;
//     int positive = 0;
//     int negative = 0;
//     for (int i = 0; i < n; i++) 
//     {
//         if (numbers[i] % 2 == 0)
//          {
//             even++;
//         } 
//         else 
//         {
//             odd++;
//         }
//         if (numbers[i] > 0)
//          {
//             positive++;
//         }
//          else if (numbers[i] < 0)
//           {
//             negative++;
//         }
//     }

//     // Print results
//     printf("Even: %d\n", even);
//     printf("Odd: %d\n", odd);
//     printf("Positive: %d\n", positive);
//     printf("Negative: %d\n", negative);

//     return 0;
// }
