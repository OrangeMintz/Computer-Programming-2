#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vars of floating-point number, which means it can obtain a number that has a decimal place.
    float Science, Filipino, Math, History, Programming,  average;
    printf("Djeikuje Nickolai C. Gacus Grades\n\n");


    /*Prints marks obtained: along with scanf %f use to gather
    floating point numbers on users to be later on divided to
    get the average number*/

    printf("Enter marks obtained in Science :");
    scanf("%f", &Science);
    printf("Enter marks obtained in Filipino :");
    scanf("%f", &Filipino);
    printf("Enter marks obtained in Math :");
    scanf("%f", &Math);
    printf("Enter marks obtained in History :");
    scanf("%f", &History);
    printf("Enter marks obtained in Programming :");
    scanf("%f", &Programming);


    /*Computes the average grade of all 5 subjects by using the floating
    point numbers gathered on scanf %f and divided by 5 subjects*/
    average = (Science + Filipino + Math + History + Programming) / 5;
    // tells the printf method to print a floating point value
    printf("Average : %0.2f\n", average);


    return 0;
}
