#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // take the int and convert to an array V
    // we create a new array and with flipped values  V
    // we compare the two arrays and see if they are congruent  V
    // if they are congruent we return true, V
    // if they are not congruent we return false, V
    int x;
    printf("Integer: ");
    scanf("%d", &x);

    if (x < 0)
    {
        return 0;
    }

    int x_len;

    if (x == 0)
    {
        x_len = 1;
    }
    else
    {
        x_len = floor(log10(abs(x))) + 1;
    }

    int reversed[x_len], original[x_len];

    int count = 0;

    while (x > 0)
    {
        original[count] = x % 10;
        x = x/10;
        count++;
    }

    for (int j = 0; j < x_len; j++)
    {
        reversed[j] = original[j];
    }


    for (int i = 0; i < x_len / 2; i++)
    {
        int temp = original[i];
        original[i] = original[x_len - i - 1];
        original[x_len - i - 1] = temp;
    }

    for (int k = 0; k < x_len; k++)
    {
        if (original[k] != reversed [k])
        {
            printf("It isn't a palyndrome.\n");
            return 0;


        }
    }
    printf("It is a palindrome.\n");
    return 1;

}
//     TESTIN
//     printf("Original: ");
//     for (int k = 0; k < n_len; k++)
//     {
//         printf("%d", original[k]);
//     }
//     printf("\n");
//
//     printf("Reversed: ");
//     for (int l = 0; l < n_len; l++)
//     {
//         printf("%d", reversed[l]);
//     }
//
//     printf("\n");

