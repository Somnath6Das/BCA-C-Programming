#include <stdio.h>

struct student {
    char name[50];
    char age[10];
};

// function prototype
void display(struct student s);

int main() {
    struct student s1;
    printf("Enter name:");

    // read string intutfrom the user until\n is enter.
    // \n is discarded
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age:");
    scanf("%[^\n]%*c", &s1.age);
    display(s1);

    return 0;
}

void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Name: %s\n", s.name);
    printf("Age: %s", s.age);
}