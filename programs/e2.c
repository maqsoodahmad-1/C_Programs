/*written by maqsood ahmad tali on 04-01-2022
  Convert the following expression into its equivalent c code 
  R=2v + 6.22( c + d )/(g+v)*/
  #include<stdio.h>
  void main()
  {
      int c,d,g,v;
      float R;
      printf("enter the four values of the variables  ");
      scanf("%d%d%d%d",&c,&d,&g,&v);
      R=((2*v)+6.22*(c+d))/(g+v);
      printf("the result R =%.3f\n",R); 
   }