#include <stdio.h>
#include <string.h>
int main()
{
    printf("Sachin Kumar\n");
    char username[20];
    char password[20];
    char user_name[] = "Sachin";
    char pass_word[] = "sachin";

    printf("Enter the User Name: ");
    scanf("%s", &username);
    printf("\nEnter the Password: ");
    scanf("%s", &password);
    if (strcmp(username, user_name) == 0 && strcmp(password, pass_word) == 0)
    {
        printf("Login Successful Welcome");
    }
    else
    {
        printf("Wrong Username OR Password");
    }
    return 0;
}
