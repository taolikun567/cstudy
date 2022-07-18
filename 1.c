#include<stdio.h>
int one_three(),two(void);
int main()
{
    printf ("starting now\n");
    one_three();
    printf("done!\n");
}
int one_three()
{
    printf("one\n");
    two ();
    printf("three\n");
    return 0;
}
int two(void)
{
    printf("two\n");
    return 0;
}