#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
     s = n - 1; // শুরুতে s এর মান হল n-1
     k = 1; // শুরুতে k এর মান হল 1
     for (int i = 1; i <= (2 * n) - 1; i++) // লুপ চালানো হয় 1 থেকে (2*n)-1 পর্যন্ত
     {
        for (int j = 1; j <= s; j++) // লুপ চালানো হয় 1 থেকে s পর্যন্ত, স্পেস প্রিন্ট করা হয়
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) // লুপ চালানো হয় 1 থেকে k পর্যন্ত, নম্বর প্রিন্ট করা হয়
        {
            printf("%d", j);
        }
        if (i <= n - 1) // যদি i এর মান n-1 এর চেয়ে ছোট হয় তাহলে s কমানো হবে এবং k বাড়ানো হবে 2 এর সাথে
        {
            s--;
            k = k + 2;
        }
        else // অন্যথায়, s বাড়ানো হবে এবং k কমানো হবে 2 এর সাথে
        {
            s++;
            k = k - 2;
        }
        printf("\n"); // নতুন লাইনে প্রিন্ট করা হয়
     }
     
    return 0;
} 
