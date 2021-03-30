#include <stdio.h>
#include <string.h>

char *my_strcpy(char s1[],char s2[])
{
    int loop;
    for(loop = 0;s2[loop]!='\0';loop++)
    {
        s1[loop] = s2[loop];
    }
    s1[loop] = '\0';
    return s1;
}

int main()

{
    char name[100],name2[100],name3[100];
    gets(name);
    my_strcpy(name2,name);
    strcpy(name3,name);
    if(strcmp(name2,name3) == 0)
    {
        printf("SUCCESS!\n");
    }
    else
    {
        printf("\tERROR!\n");
    }

    return 0;
}
