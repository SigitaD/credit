#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number = 0, k = 0, l = 0, m = 0, first_sum = 0, second_sum = 0, sum = 0;
    int m1 = 0, m2 = 0, y = 0;

//papraso vartotojo skaiciaus, kuris butu teigiamas
    do
    {
        number = get_long("What's the number of credit card?\n");
    }
    while (number < 0);

    // printf("number: %ld\n", number);

    k = number;

//patikrinu, gerai aprasiau veiksma, kur numberis tampa kintamuoju k
//printf("%ld\n", k);

    while (k > 0)
    {
        // printf("Evaluated number: %ld\n", k);
        l = k / 10;
        m = l % 10;
        // printf("mod result: %ld\n", m);
        k = k / 100;

        m = m * 2;
        m1 = m % 10;
        m2 = m / 10;

        first_sum = first_sum + m1 + m2;

    }

    // printf("first sum: %ld\n", first_sum);

    k = number;

    while (k > 0)
    {
        y = k % 10;
        k = k / 100;

        second_sum = second_sum + y;
    }

    // printf("second sum: %ld\n", second_sum);

    sum = first_sum + second_sum;
    // printf("sum: %ld\n", sum);

    if (sum % 10 == 0)
    {
        if (349999999999999 >= number & number >= 340000000000000)
        {
            printf("AMEX\n");
        }

        else if (379999999999999 >= number & number >= 370000000000000)
        {
            printf("AMEX\n");
        }

        else if (5599999999999999 >= number & number >= 5100000000000000)
        {
            printf("MASTERCARD\n");
        }

        else if (4999999999999 >= number & number >= 4000000000000)
        {
            printf("VISA\n");
        }

        else if (4999999999999999 >= number & number >= 4000000000000000)
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
