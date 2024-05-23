#include <stdio.h>

int main() {
  int num1 , num2 , result = 0;
  char op ;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  printf("Enter the operator: +, -, *, / ");
  scanf(" %c",&op);
  switch(op) {
    case '+' : result = num1 + num2;
	       break;
    case '-' : result = num1 - num2;
	       break;
    case '*' : result = num1 * num2;
	       break;
    case '/' : if( num2 == 0 ) {
		printf("Denominator is 0");
	     } else {
		 result = num1 / num2;
             }
               break;
    default : "Invalid Value";
  }
  printf("The Result is : %d", result);
  return 0;
}
