#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINUX_LENGTH 33

char *login(const char *name, const char *surname) 
{

    // Alokacja pamięci dla loginu
    char *user_login = (char *)malloc(LINUX_LENGTH); 
    if (user_login == NULL) {
        return NULL; 
    }

    //formatowanie ciagu znaku ebebe
    snprintf(user_login, LINUX_LENGTH, "%c%s", name[0], surname);

    
    user_login[LINUX_LENGTH] = '\0';

    return user_login;
}

int main() {
    const char *name = "Jan";
    const char *surname = "Kowalski";

    char *user_login = login(name, surname);
    
    if (user_login != NULL) 
    {
        printf("Login: %s\n", user_login);
        free(user_login); // Zwolnienie pamięci po użyciu
    } 
    else 
    {
        printf("Błąd przy tworzeniu loginu!\n");
    }

    return 0;
}
