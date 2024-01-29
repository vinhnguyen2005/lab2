#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char name[100];
char studentID[12];
float PE, FE, AVG;

void input() {
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    printf("\nEnter your Student's ID: ");
    fgets(studentID, 12, stdin);
    printf("\nEnter your PE: ");
    scanf("%f", &PE);
    getchar();  // Consume the newline character
    printf("\nEnter your FE: ");
    scanf("%f", &FE);
    getchar();  // Consume the newline character
    AVG = (PE + FE) / 2;  
}

void display() {
    printf("\n Your name is: %s", name);
    printf("\n Your Student's ID is: %s", studentID);
    printf("\n Your PE: %.2f", PE);
    printf("\n Your FE: %.2f", FE);
    printf("\n Your AVG: %.2f", AVG);
}

void edit(int *choice) {
    printf("\nEditing information:");
    printf("What do you want to change: ");
    printf("\n1. Your name");
    printf("\n2. Your Student's ID");
    printf("\n3. Your PE");
    printf("\n4. Your FE");
    int subChoice;
    printf("\nEnter your choice: ");
    scanf("%d", &subChoice);
    getchar();  // Consume the newline character

    switch (subChoice) {
        case 1:
            printf("Enter your new name: ");
            fgets(name, 100, stdin);
            break;
        case 2:
            printf("Enter your new Student's ID: ");
            fgets(studentID, 12, stdin);
            break;
        case 3:
            printf("Enter your new PE: ");
            scanf("%f", &PE);
            getchar();  // Consume the newline character
            AVG = (PE + FE) / 2;  
            break;
        case 4:
            printf("Enter your new FE: ");
            scanf("%f", &FE);
            getchar();  // Consume the newline
    }
}

int main() {
    int choice;
    do {
        printf("\n\tStudent Management System");
        printf("\n Welcome user, please enter your option:");
        printf("\n1. Nhap thong tin sinh vien");
        printf("\n2. In thong tin sinh vien");
        printf("\n3. Sua thong tin sinh vien");
        printf("\n4. Exit");
        scanf("%d", &choice);
        getchar();  // Consume the newline character

        switch (choice) {
            case 1:
                printf("\nEnter your information:\n");
                input();
                break;
            case 2:
                printf("\nYour information:");
                display();
                break;
            case 3:
                edit(&choice);  
                break;
            default:
                break;
        }
    } while (choice != 4);

    return 0;
}
