#include <stdio.h>

int main()
{
    char name[50];
        int rollno;
        char div;

        printf("Enter your name : ");
        scanf("%s", name); 

        printf("Enter your roll no: ");
        scanf("%d",&rollno);

        printf("Enter your div : ");
        scanf("%s", &div); 

        printf("\n--- Details ---\n");
        printf("Name: %s\nRoll No: %d\nDivision: %c\n", name, rollno, div);

     return 0;
 }