/*The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
BMI Category                BMI

Starvation                  <15
Anorexic                    15.1 to 17.5 
Underweight                 17.6 to 18.5 
Ideal                       18.6 to 24.9
Overweight                  25  to 25.9
Obese                       30 to 30.9
Morbidly Obese              >=40
*/
#include<stdio.h>
#include<math.h>
void main()
{
    float weight,height,BMI;
    printf("Enter the following details of a person \n");
    printf("\nweight :");
    scanf("%f",&weight);
    printf("\nheight :");
    scanf("%f",&height);
    BMI = (weight/(pow(height,2)));
    if(BMI<15)
    {
        printf("The BMI category of a persin is Starvation \n");
    }
    else if (BMI>=15.1&&BMI<=17.5)
    {
        printf("The BMI category of a persin is Anorexic");

    }
    else if(BMI>=17.6&&BMI<=18.5)
    {
        printf("The BMI category of a persin is Underweight \n");
    }
    else if(BMI>=18.6&&BMI<=24.9)
    {
        printf("The BMI category of a persin is Ideal \n");
    }
    else if(BMI>=25&&BMI<=25.9)
    {
        printf("The BMI category of a persin is Overweight \n");
    }
    else if(BMI>=30&&BMI<=30.9)
    {
        printf("The BMI category of a persin is Obese\n");
    }
    else if(BMI>=40)
    {
        printf("The BMI category of a persin is Morbidly Obese \n");
    }
    else
    {
        printf("sorry we can't detect the BMI category of a person try with different inputs \n");
    }
    printf("The BMI of a person is %0.2f\n",BMI);
}
 