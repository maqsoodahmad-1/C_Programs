/*In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-Yellow-
Black (CMYK) format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formulae:
White =Max ( Re d / 255 , Green / 255 , Blue / 255) 
Cyan = ((White - (Re d / 255))/White)
Magenta = ((White - (Green / 255))/White)
Yellow = ((White - (Blue / 255)/White)
Black = 1 - White
Note that if the RGB values are all 0, then the CMY values
are all 0 and the K value is 1.
*/
#include<stdio.h>
void main()
{
    float Red,Green,Blue;
    float White ,Cyan,Magenta,Yellow,Black;
    printf("Enter the following details \n");
    printf("\nEnter the Red color :");
    scanf("%f",&Red);
    printf("\nEnter the Green color :");
    scanf("%f",&Green);
    printf("\nEnter the Blue color :");
    scanf("%f",&Blue);
    if(Red==0&&Green==0&&Blue==0)
    {
      printf("The CYMK equivalent of RGB is 0 0 0 \n");
    }
    else if((Red>=0&&Red<255)&&(Green>=0&&Green<255)&&(Blue>=0&&Blue<255))
    {
        if(Red>Green&&Red>Blue)
        {
            White = Red/255;
        }
        else if(Red>Green&&Red<Blue)
        {
            White = Blue/255;
        }
        else if(Red<Green&&Green>Blue)
        {
            White = Green/255;
        }
        else
        {
            White = Blue/255;
        }
        printf("The RGB value of color is %0.2f %0.2f %0.2f\n",Red,Green,Blue);
        Cyan = ((White - (Red / 255))/White);
        Magenta = ((White - (Green / 255))/White);
        Yellow = ((White - (Blue / 255)/White));
        Black = 1 - White;
        printf("The CMYK equivalent of RGB color is %0.2f %0.2f %0.2f %0.2f \n",Cyan,Magenta,Yellow,Black);

    }
    else 
    {
        printf("Enter the values in a limit \n");
    }
}
