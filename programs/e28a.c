/*  Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
    lower case alphabet or not.*/
    #include<stdio.h>
    void main()
    {
        char c;
        printf("Enter anycharacter :");
        scanf("%c",&c);
    ((c>=97&&c<=122)?printf("\nThe character entered is a lower case alphabet\n"):
    printf("\nThe character entered not a  lower case alphabe\n"));
    }