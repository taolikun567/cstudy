#include <stdio.h>
main ()
{
    int fahr,celesius;
    int lower,upper,step;
    lower = 0;
    upper =300;
    step =20;

    fahr = lower;
    while (fahr <= upper)
    {celesius=5*(fahr-32)/9;
    printf("%d\t%d\n",fahr,celesius);
    fahr = fahr + step;
        
    }
    
}