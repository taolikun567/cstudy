#include <stdio.h>
int main()
{
float weight;
float value;
printf ("Are you worth your weight in platinum?\nlet's chkck it out.\n");
printf ("please enter your weight in prouds:");
scanf ("%f",&weight);
value = 1700.0*weight*14.5833;
printf("your weight in platinum is worth $%.2f\n",value);

}