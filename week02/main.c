#include <stdio.h>

int main(void)
{
//Exercise 5: Ask for two integers and display their sum, difference and product.
 /*   int a, b;

    printf("\nEnter A: ");
    scanf("%d",&a);

    printf("\nEnter B: ");
    scanf("%d",&b);
    printf("Sum:%d\nDifference:%d\nProduct:%d\n",a+b,a-b,a*b); */

//Exercise 6: Ask for three daily temperatures (double) and calculate their average.
/*
    double temp1, temp2, temp3;

    printf("\nEnter Temp 1: ");
    scanf("%lf",&temp1);

    printf("\nEnter Temp 2: ");
    scanf("%lf",&temp2);

    printf("\nEnter Temp 3: ");
    scanf("%lf",&temp3);

    double average = (temp1 + temp2 + temp3) / 3;
    printf("%.2f",average );
*/

//Exercise 7: Ask for a whole number and report whether it is even or odd using %.
/*
    int whole_number;
    printf("Enter Whole Number: ");

    if(scanf("%d",&whole_number) != 1)
    {
        printf("\nEnter a valid number.");
        return 1;
    }


    if (whole_number %2 == 0)
    {
        printf("\nEven");
    }

    else
    {
        printf("\nOdd");
    }
*/
// Exercise 8: Ask for a score from 0 to 100. Print "Invalid" if it is outside that range; otherwise print "Pass" for 50
//or above and "Fail" below 50.
/*
    int score;

    printf("\nEnter Score From 0-100");

    if (scanf("%d", &score) != 1)
    {
        printf("Invalid input.\n");

        return 1;
    }

    if (score < 0 || score > 100)
    {
        printf("Invalid\n");
    }

    else if (score >= 50)
    {
        printf("Pass\n");
    }

    else
    {
        printf("Fail\n");
    }
*/

//Exercise 9: Ask for the number of books borrowed and a price per book. Calculate the total cost.
/*
    int books_borrowed;
    double price_per;

    printf("Enter Amount of Books: ");
    if (scanf("%d",&books_borrowed) != 1)
    {
        printf("Enter Valid Number.");
        return 1;
    }

    printf("Enter the Price per a Book: ");
    if (scanf("%lf",&price_per) != 1 || price_per < 0)
    {
        printf("Enter Valid Number");
        return 1;
    }

    double books_and_price = (books_borrowed * price_per);
    printf("The price is %.2f", books_and_price);

*/
//Exercise 10: Ask for two measurements and print the larger value, or "Equal" if they match.
/*
    double measurement1, measurement2;


    printf("Enter Measurement 1: ");
    scanf("%lf", &measurement1);

    printf("Enter Measurement 2: ");
    scanf("%lf", &measurement2);

    if (measurement1 > measurement2)
    {
        printf("%.2f\n", measurement1);
    }

    else if (measurement2 > measurement1)
    {
        printf("%.2f\n", measurement2);
    }
    else
    {
        printf("Equal\n");
    }
    */

//Exercise 11: Mini data task: enter rainfall amounts for three days, print the total and average, and report
//whether the average exceeds 10.0. Test with at least two sets of inputs.
    double day1, day2, day3;

    printf("Enter the rainfall for day 1: ");
    if (scanf("%lf", &day1) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the rainfall for day 2: ");
    if (scanf("%lf", &day2) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter rainfall for day 3: ");
    if (scanf("%lf", &day3) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    double total = (day1 + day2 + day3);
    double average = total / 3.0;

    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    if (average > 10.0)
    {
        printf("Average exceeds 10.0\n");
    }
    else
    {
        printf("Average does not exceed 10.0\n");
    }


    return 0;
}
