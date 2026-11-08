#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char roll[20];
    char username[100];
    int len;

    printf("Enter first name: ");
    fgets(name, 50, stdin);
    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter roll number: ");
    fgets(roll, 20, stdin);
    len = strlen(roll);
    if (roll[len - 1] == '\n') {
        roll[len - 1] = '\0';
    }

    strcpy(username, name);
    strcat(username, "_");
    strcat(username, roll);

    printf("Username: %s\n", username);
    printf("Length: %d\n", (int)strlen(username));
}