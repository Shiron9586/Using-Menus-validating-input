#include <stdio.h>
#include<math.h>
#pragma warning (disable:4996)


int main() {

    char name[20], id[20];
    int subject, total=0, marks, stop;

    do {
        printf("Enter student name:");
        rewind(stdin);
        scanf("%[^\n]", &name);
        printf("Please enter student ID:");
        rewind(stdin);
        scanf("%[^\n]", &id);


        for (subject = 1; subject <= 3; subject++)
        {
            printf("Subject %d: ", subject);
            scanf("%d", &marks);
            total += marks;
        }
        printf("---------------------------\n");
        printf("Total marks: %d", total);
        total = 0;
        printf("\nNeed to do again? press -1:");
        scanf("%d", &stop);
    } while (stop == -1);
  
    system("pause");
    
    
    return 0;
}
