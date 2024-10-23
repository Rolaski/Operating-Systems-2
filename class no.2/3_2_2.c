#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *identity(const char *name, const char *surname)
{
    char *result = malloc(strlen(name) + strlen(surname) +2);

    if (result == NULL) 
    {
        return NULL;
        //alokacja sie powidola
    }

    sprintf(result, "%s %s", name, surname);
    return result;
}

int main() 
{
    const char *name = "Fifonz";
    const char *surname = "Kowalski";

    char *full_identity = identity(name, surname);

    if(full_identity != NULL)
    {
        printf("Nazywasz sie: %s\n", full_identity);
        free(full_identity); //zwolnienie pamieci
    }
    else
    {
        printf("Jestes nikim!");
    }
}