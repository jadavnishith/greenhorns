#include <stdio.h>

int main() {
    //question 1
     float celsius, fahrenheit;

    printf("Enter temperature in degrees Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit %.2f\n\n", fahrenheit);

    // question 2

    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

    
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercentage);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercentage);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercentage);

    
    float hra = (hraPercentage / 100) * baseSalary;
    float da = (daPercentage / 100) * baseSalary;
    float ta = (taPercentage / 100) * baseSalary;

    
    grossSalary = baseSalary + hra + da + ta;

    
    printf("\nBase Salary: Rs. %.2f\n", baseSalary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("TA: Rs. %.2f\n", ta);
    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    // question 3

    float angle1, angle2, angle3;
    
     printf("Enter the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    
    angle3 = 180 - angle1 - angle2;
    
    printf("\nThe third angle is : %.2f degrees\n", angle3);
    return 0;
}

