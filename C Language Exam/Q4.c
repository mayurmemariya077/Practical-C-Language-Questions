

// 10101
//  1010
//   101
//    10
//     1

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = n; i >= 1; i--)
{
        for (int j = n; j > i; j--)
        {

            printf(" ");

        }
        for (int k = 1; k <= i; k++)
        {
            
            if (k % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}