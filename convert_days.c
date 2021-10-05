#include <stdio.h>
#include <stdlib.h>

void convert_years_months_days(int days);

int main()
{
    int days;
    printf("Enter days:");
    scanf("%d", &days);

    convert_years_months_days(days);

    return 0;
}


void convert_years_months_days(int days){

    //first abstract years
    //then months
    //then days

    int years = days / 365;
    printf("years: %d \n", years);

    //leftover after removing years
    int left_days = days % 365;
    int months = left_days / 30;
    printf("months: %d \n", months);

    left_days = left_days%30;
    printf("days: %d \n", left_days);

}
