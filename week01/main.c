/*#include <stdio.h>

int main(void)
{
    int count = 4;
    double temperature = 21.54;
    printf("Count: %d \n", count);
    printf("Temperature: %.2f\n", temperature);
} */

/* Week 1 | Exercises
Exercise 1: Print your name, your course name, and a welcome message on separate lines.
Exercise 2: Declare variables for three classroom attendance counts and print each value.
Exercise 3: Store the length and width of a rectangle in double variables, then calculate and print its area.
Exercise 4: Predict the output of printf("%d", 7 / 2); and explain why integer division differs from decimal
#division. */


#include <stdio.h>

int main(void)
{
// Exercise 1:
    printf("Exercise 1:\n");
    printf("Gezim\nIntroduction to Programming\nWelcome!\n");
// Exercise 2:
    printf("\nExercise 2:");
    int science_attendance = 12;
    int math_attendance = 15;
    int turkish_attendance = 6;
    printf("\nScience: %d\nMath: %d\nTurkish: %d", science_attendance, math_attendance, turkish_attendance);

// Exercise 3:
    printf("\n\nExercise 3:\n");
    double length = 7.4;
    double width = 4.2;
    double area = length * width;
    printf("Area: %.2f", area);
// Exercise 4:
    printf("\n\nExercise 4:\n");
    printf("Predicted output is 3.\nBecause 7 and 2 are of integer type (int), integer division is done and cuts off the decimals.\nYou would instead use %%f and make one of them a float, %.2f.", 7.0 / 2);

    return(0);
}
