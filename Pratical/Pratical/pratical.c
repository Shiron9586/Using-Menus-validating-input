#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning (disable:4996)


int  smallest(int num1, int num2, int num3, int num4, int num5);
int  largest(int num1, int num2, int num3, int num4, int num5);
int  sum(int num1, int num2, int num3, int num4, int num5);
int  average(int num1, int num2, int num3, int num4, int num5);


int main() {

	
	int num1, num2, num3, num4, num5, opt, a, b, c, d;
	char yesorno;
	
	do {
		printf("Enter 5 numbers >");
		scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
		do {
			printf("\n(1) find the smallest\n");
			printf("(2) find the largest\n");
			printf("(3) find the sum\n");
			printf("(4) find the average\n");
			printf("\nChoose an option: ");
			scanf("%d", &opt);

			switch (opt) {

			case 1: {
				a = smallest(num1, num2, num3, num4, num5);
				printf("\nThe smallest number is : %d\n", a); }
				  break;
			case 2:
			{
				b = largest(num1, num2, num3, num4, num5);
				printf("\nThe largest number is : %d\n", b);
			}
			break;
			case 3: {
				c = sum(num1, num2, num3, num4, num5);
				printf("\nThe sum of the number is : %d\n", c); }
				  break;
			case 4: {
				d = average(num1, num2, num3, num4, num5);
				printf("\nThe average of the number is : %d\n", d); }
				  break;
			default: {
				printf("Please enter value from(1 - 4) only!\n");
				printf("======================================\n"); }
			}
		} while (opt <= 0 || opt > 4);

		printf("Next?(type y or n)>");
		rewind(stdin);
		scanf("%c", &yesorno);
	} while (yesorno == 'y' || yesorno == 'Y');
	printf("\n\n");
	system("pause");
	return 0;
}

 int smallest(int num1, int num2, int num3, int num4, int num5) {

	 int result;
	 printf("\nYou have selected these numbers: %d %d %d %d %d", num1, num2, num3, num4, num5);
	 if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
		 result = num1;
	 else if (num2 < num3 && num2 < num4 && num2 < num5)
		 result = num2;
	 else if (num3 < num4 && num3 < num5)
		 result = num3;
	 else if (num4 < num5)
		 result = num4;
	 else
		 result = num5;
	 return result;
}

 int  largest(int num1, int num2, int num3, int num4, int num5) {
	 int result;
	 printf("\nYou have selected these numbers: %d %d %d %d %d", num1, num2, num3, num4, num5);
	 if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		 result = num1;
	 else if (num2 > num3 && num2 > num4 && num2 > num5)
		 result = num2;
	 else if (num3 > num4 && num3 > num5)
		 result = num3;
	 else if (num4 > num5)
		 result = num4;
	 else
		 result = num5;
	 return result;

 }


 int  sum(int num1, int num2, int num3, int num4, int num5) {
	 int result;
	 printf("\nYou have selected these numbers: %d %d %d %d %d", num1, num2, num3, num4, num5);
	 result = num1 + num2 + num3 + num4 + num5;
	 return result;

 }


 int  average(int num1, int num2, int num3, int num4, int num5) {
	 float sum, average;
	 printf("\nYou have selected these numbers: %d %d %d %d %d", num1, num2, num3, num4, num5);
	 sum = num1 + num2 + num3 + num4 + num5;
	 average = sum / 5;

	 return average;

 }