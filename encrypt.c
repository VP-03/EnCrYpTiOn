#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[20];
    printf("Enter the password: \n");
    fgets(password,20,stdin);
    
    for (int i = 0; (i < 20 && password[i]!='\0'); i++)
    {
        password[i] = password[i] + 6;
    }
    
    printf("Encrypted value = %s\n", password);
}