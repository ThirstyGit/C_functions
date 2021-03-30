#include <stdio.h>
#include <string.h>

char *my_strcat(char s1[],char s2[])
{
    int len,loop;
    for(loop = 0;s1[loop]!=0;loop++);

    len = loop;
    for(loop = 0;s2[loop]!=0;loop++)
    {
        s1[loop + len] = s2[loop];
    }
    s1[loop+len] = '\0';
}

int main()

{
    char string1[100],string2[100],string3[100];
    gets(string1);
    gets(string3);
    strcpy(string2,string1);
    strcat(string1,string3);
    my_strcat(string2,string3);
    if(strcmp(string1,string2) == 0)
    {
        printf("SUCCESS!\n");
    }
    else
    {
        printf("ERROR!\n");
    }



    return 0;
}
