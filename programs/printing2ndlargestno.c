//the program is written to print second largest number form three different numbers entered by user 


#include <stdio.h>
void main()
{int a,b,c;
printf("input three numbers\n");
scanf("%d%d%d",&a, &b, &c);
 if(a>b){
        if(a<c){
            printf("%d",a);
        }
        else {
           if(b>c){
            printf("%d",b);}
           else{
            printf("%d",c);}
        }
    }  
 else {
        if (b<c){
        printf("%d",b);}
        else {
            if(c<a){
                printf("%d",a);            
            }
            else{
                printf("%d",c);
            }
        }
    }
    
}