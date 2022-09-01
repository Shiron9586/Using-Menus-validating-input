#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int displayMalaysiaState();
void displayRegionEast();
void displayRegionWest();


void main()
{
	int b;
	char e[]="EAST MALAYSIA";
	char w[] = "WEST MALAYSIA";

	b = displayMalaysiaState();
	if (b == 1) {
		displayRegionEast();
		printf("You are from %s\n", e);
	}
	else if (b == 2) {
		displayRegionWest();
		printf("You are from %s\n", w);
	}
	else if (b == 3) {
		printf("You have exit the program\n");
		system("pause");
	}
}

int displayMalaysiaState()
{
	int a;

		do {
			printf("\n(1) East Malaysia");
			printf("\n(2) West Malaysia");
			printf("\n(3) Exit Program");
			printf("\n=============================");
			printf("\nPlease choose one option :");
			scanf("%d", &a);
			printf("=============================\n");
			
			if (a > 3 || a <= 0) {
				printf("Invalid Please enter the number range from(1-2) only!\n");
			}
		} while (a > 3 || a <= 0);
	
		return a;
}

void displayRegionEast()
{
	int b, north, central, south;

	printf("\n(1) Northern Region ");
	printf("\n(2) Central Region");
	printf("\n(3) Southern Region");
	printf("\n=============================\n");
	printf("\nPlease choose one option :");
	scanf("%d", &b);
	while (b > 3 || b <= 0)
	{
		printf("Invalid Please enter the number range from(1-3) only!");
		displayRegionEast();
	}
	do {
		system("cls");
		switch (b) {
		case 1: {
			do {
			
					printf("\n=============================\n");
					printf("%22s", "Northern Region");
					printf("\n=============================\n");
					printf("\n(1)Sabah");
					printf("\nchoose one option :");
					scanf("%d", &north);
				
				if (north <= 0 || north > 1) {
					printf("Invalid ,Please enter a corerct only!");
				}
			} while (north <= 0 || north >1);
		}
			  break;
		case 2: {
			do {
				printf("\n=============================\n");
				printf("%21s","Central Region");
				printf("\n=============================\n");
				printf("\n(1)Kota Kinabalu");
				printf("\nchoose one option :");
				scanf("%d", &central);
				if (central <= 0 || central > 1) {
					printf("Invalid ,Please enter a corerct only!");
				}
			} while (central <=0 || central >1);
		}
			  break;
		case 3: {
			do {
				printf("\n=============================\n");
				printf("%22s", "Southern Region");
				printf("\n=============================\n");
				printf("\n(1)Sarawak");
				printf("\nchoose one option :");
				scanf("%d", &south);
				if (south <= 0 || south > 1) {
					printf("Invalid ,Please enter a corerct only!");
				}
			} while (south <=0 || south >1);
		}
			  break;
		default:
			break;
		}
	} while (b < 0 || b>4);
}

void displayRegionWest()
	{
	    int c, north, central, south;
		
		printf("\n(1) Northern Region ");
		printf("\n(2) Central Region");
		printf("\n(3) Southern Region");
		printf("\n=============================\n");
		printf("\nPlease choose one option :");
		scanf("%d", &c);

		while (c > 3 || c <= 0)
		{
			printf("Invalid Please enter the number range from(1-3) only!");
			displayRegionWest();
		}

		do {
			system("cls");
			switch (c) {
			case 1: {
				do {
					printf("\n=============================\n");
					printf("%22s", "Northern Region");
					printf("\n=============================\n");
					printf("\n(1)Perlis");
					printf("\n(2)Kedah");
					printf("\n(3)Pulau Pinang");
					printf("\n(4)Perak");
					printf("\nchoose one option :");
					scanf("%d", &north);
					if (north <= 0 || north > 4) {
						printf("Invalid ,Please enter a corerct only!");
					}
				} while (north <=0 || north >4);
			}
				  break;
			case 2: {
				do {
					printf("\n=============================\n");
					printf("%22s", "Central Region");
					printf("\n=============================\n");
					printf("\n(1)Selangor");
					printf("\n(2)Wilayah persekutuan");
					printf("\n(3)Negeri Sembilan");
					printf("\nchoose one option :");
					scanf("%d", &central);
					if (central <= 0 || central > 3) {
						printf("Invalid ,Please enter a corerct only!");
					}
				} while (central <=0 || central >3);
			}
				  break;
			case 3: {
				do {
					printf("\n=============================\n");
					printf("%22s", "Southern Region");
					printf("\n=============================\n");
					printf("\n(1)Melaka");
					printf("\n(2)Johor");
					printf("\nchoose one option :");
					scanf("%d", &south);
					if (south <= 0 || south > 2) {
						printf("Invalid ,Please enter a corerct only!");
					}
				} while (south <= 0 || south > 2);
			}
				   break;
			  default:
				break;
			}
		} while (c < 0 || c>4);
	}

