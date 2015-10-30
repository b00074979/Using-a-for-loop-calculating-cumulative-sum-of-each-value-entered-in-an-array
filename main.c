/*LAB 1 Q5 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose: An array 12 elements long, again of type int called last_one that accepts 12 integers. Using a ‘for’ loop populate the array and output the cumulate values of all elements to the user.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int last_one[12];
   int i;
   int sum=0;

    for(i=0; i<12;i++){
       printf("Enter value:");
       scanf("%d",&last_one[i]);


        for(i=0; i<12;i++){
        scanf("%d",&i);
     sum = sum+i;
      printf("sum=%d\n",sum);

    }


   }



    return 0;
}
