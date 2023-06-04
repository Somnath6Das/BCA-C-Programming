#include<stdio.h>
#include<string.h>

int main() {
    char name[3] ={'m', 'y', '\0'};  // \0 is a null chracter
    printf("%s\n", name);
    char str1[65], str2[98];
    strcpy(str1, name);
    printf("%s\n", str1);
    strcpy(str1, "Som");
    printf("%s\n", str1);
    strcpy(str2, "Das");
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str2, str1));
    char str3[7] = {"tr"}, str4[9] = {"tr"};
    printf("%d\n", strcmp(str3, str4));
    return 0;
}