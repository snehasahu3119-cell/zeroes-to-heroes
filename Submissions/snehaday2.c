#include <stdio.h>
#include <string.h>

int main() {
    int choice;

    printf("1. Even or Odd\n");
    printf("2. Voting Eligibility\n");
    printf("3. Largest of Two Numbers\n");
    printf("4. Login Check\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int n;
        printf("Enter number: ");
        scanf("%d", &n);

        if (n % 2 == 0)
            printf("Even");
        else
            printf("Odd");
    }

    else if (choice == 2) {
        int age;
        printf("Enter age: ");
        scanf("%d", &age);

        if (age >= 18)
            printf("Eligible to vote");
        else
            printf("Not eligible to vote");
    }

    else if (choice == 3) {
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        if (a > b)
            printf("%d", a);
        else
            printf("%d", b);
    }

    else if (choice == 4) {
        char pass[20];
        printf("Enter password: ");
        scanf("%s", pass);

        if (strcmp(pass, "admin123") == 0)
            printf("Login Successful");
        else
            printf("Incorrect Password");
    }

    else {
        printf("Invalid choice");
    }

    return 0;
}
