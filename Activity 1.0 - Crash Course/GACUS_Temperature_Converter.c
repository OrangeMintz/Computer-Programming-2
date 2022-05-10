//DJEIKUJE NICKOLAI C. GACUS
//Temperature Converter
#include<stdio.h>
int main(void){

    float celsius;
    float fahrenheit;
    float kelvin;

    int chc;
        printf("\n Please select a conversion type \n");
            printf(" 1 - Celsius to Fahrenheit \n");
            printf(" 2 - Celsius to Kelvin \n");
            printf(" 3 - Fahrenheit to Celsius \n");
            printf(" 4 - Fahrenheit to Kelvin \n");
            printf(" 5 - Kelvin to Celsius \n");
            printf(" 6 - Kelvin to Fahrenheit \n");
        printf(" Enter your choice:\n ");
                scanf("%d", &chc);

    if(chc == 1){
            printf("\n Celsius to Farenheit\n");
            printf(" Please enter a Celsius temperature: ");
                scanf("%f",&celsius);
        fahrenheit = (celsius * 1.8)+32;
            printf(" Result: %f Fahrenheit \n",fahrenheit);

    }else if (chc == 2){
            printf("\n Celsius to Kelvin \n");
            printf(" Please enter a Celsius temperature: ");
                scanf("%f",&celsius);
        kelvin = celsius + 273.15;
            printf(" Result: %f Kelvin \n",kelvin);

    }else if (chc == 3){
            printf("\n Fahrenheit to Celsius \n");
            printf(" Please enter a Fahrenheit temperature: ");
                scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
            printf(" Result: %f Celsius \n",celsius);

    }else if (chc == 4){
            printf("\n Fahrenheit to Kelvin \n");
            printf(" Please enter a Fahrenheit temperature: ");
                scanf("%f",&fahrenheit);
        kelvin = (fahrenheit - 32) / 1.8 + 273.15;
            printf(" Result: %f Kelvin \n",kelvin);

    }else if (chc == 5){
            printf("\n Kelvin to Celsius \n");
            printf(" Please enter a Kelvin temperature: ");
                scanf("%f",&kelvin);
        celsius = kelvin - 273.15;
            printf(" Result: %f Celsius \n",celsius);

    }else if (chc == 6){
            printf("\n Kelvin to Fahrenheit \n");
            printf(" Please enter a Kelvin temperature: ");
                scanf("%f",&kelvin);
        fahrenheit = (kelvin - 273.15) * 1.8 + 32;
            printf(" Result: %f Fahrenheit \n",fahrenheit);

    }else{
            printf(" \n Invalid choice\n");
         }
return 0;
}
