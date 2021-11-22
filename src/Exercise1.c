/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	int sum,digit1,digit2,digit3,digit4;
    printf("enter four digit integer:\n");
    scanf("%d", &digit1,&digit2,&digit3,&digit4);

    digit1=(digit1%1000)/10;
    digit2=(digit2%1000)/10;
    digit3=(digit3%1000)/10;
    digit4=(digit4%1000)/10;

    /*calculation*/
    sum=digit1+digit2+digit3+digit4;

    printf ("answer is: %d\n",sum);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
