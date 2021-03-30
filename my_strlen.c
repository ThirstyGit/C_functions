#include <stdio.h>
#include <string.h>

//Custom made strlen.
int my_strlen(char s[])
{
    int loop;
    for(loop = 0;s[loop]!= '\0';loop++);

    return loop;
}

//Implementation of the Function.

int main()

{
    char name[100];
    gets(name);
    if(strlen(name) == my_strlen(name))
    {
        printf("SUCCESS!\n");
    }
    else
    {
        printf("ERROR!\n");
    }


    return main();
}
