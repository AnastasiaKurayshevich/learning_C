/* sineAbsolute
 here is some documentation
 14 Sep 2023
 */

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf("sin( %lf ) = %lf \n", interval, fabs(sin(interval))); //abs is for integers, so I changed it to fabs
    //also did \n new line istead of \t tab for better readability
}

printf("\n+++++++\n");
return 0;
}
