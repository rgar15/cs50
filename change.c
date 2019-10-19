#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int coins_owed;
    do
    {
        float dollars_owed = get_float("Change owed: ");
        coins_owed = round(dollars_owed * 100);
    }
    while (coins_owed <= 0);

    //count the coins
    int quarters = coins_owed / 25;
    int dimes = (coins_owed % 25) / 10;
    int nickels = ((coins_owed % 25) % 10) / 5;
    int pennies = ((coins_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
