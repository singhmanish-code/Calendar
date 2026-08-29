#include <stdio.h>

int main(void)
{
    int days, s_day, s, i;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);
    printf("Enter starting day of the month (1 = Sun, 7 = Sat): ");
    scanf("%d", &s_day);
    
    printf("\n Su Mo Tu We Th Fr Sa\n");
    for(i = 1; i <= days; i++) {
        if (i < s_day)
            printf("   ");
        else
            printf("%3d", i);
        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}
