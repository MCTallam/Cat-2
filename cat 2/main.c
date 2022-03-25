/*simple calculator
Maureen Tallam
last updated 24/02/2022
MIT license

 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int n1,sum,product,diff,quot;
    printf("Simple Calculator!\n");

    //input
    printf("Enter an integers:");
    scanf("%d",&n1);


    //computations
    sum = 0 + n1;
    product = -11 *(0 + n1);
    diff = (-11*(0+n1)) - 1;
    quot = ((-11*(0+n1))-1)/3;


    //output
    printf("0+%d=%d\n",n1,sum);
    printf("11*(0+%d)=%d\n",n1,product);
    printf("(11*(0+%d))-1=%d\n",n1,diff);
    printf("((11*(0+%d))-1)/3=%d\n",n1,quot);
    return 0;
}
