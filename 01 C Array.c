/*
This is an assignment asking you to write a program to:

1 Read the temperature of the midday for each day of a month.
2 Calculate and display the average temperature of the month.
3 Identify and display the hottest and coolest days of the month.
*/


#include <stdio.h>

int main() {
    int n = 30;
    float temperatures[30];
    float sum = 0.0, average;
    int hottestDay = 0, coolestDay = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];

        if (temperatures[i] > temperatures[hottestDay]) {
            hottestDay = i;
        }
        if (temperatures[i] < temperatures[coolestDay]) {
            coolestDay = i;
        }
    }

    average = sum / n;

    printf("\nAverage temperature of the month: %.2f\n", average);
    printf("Hottest day: Day %d with %.2f°C\n", hottestDay + 1, temperatures[hottestDay]);
    printf("Coolest day: Day %d with %.2f°C\n", coolestDay + 1, temperatures[coolestDay]);

    return 0;
}
