#include <stdio.h>
int main()
{float a,b;
float lower,upper,step;
lower = 0;
upper = 300;
step = 1;
a = upper;
printf("摄氏度 华氏度\n");
while (a>=lower/* condition */)
{b=(5/9.0)*(a-32);
printf("%3.0f\t%6.1f\n",a,b);
a = a - step;
    /* code */
}
}
