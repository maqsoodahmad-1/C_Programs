/*Using cnditional operators check:
  Whether a character entered through the keyboard is a special 
  symbol or not.*/
  #include<stdio.h>
    void main()
    {
        char c;
        printf("Enter anycharacter :");
        scanf("%c",&c);
    (((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))?
    printf("\nThe character entered is a special symbol \n"):
    printf("\nThe character entered is not a  special symbol\n"));
    }