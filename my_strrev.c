#include <stdio.h>
#include <string.h>

char *my_strrev(char s[])
{
    int loop;
    char temp;
    for(loop = 0;s[loop]!=0;loop++);

    int len = loop;
    for(loop = 0;loop<len/2;loop++)
    {
        temp = s[loop];
        s[loop] = s[len - loop - 1];
        s[len - loop - 1] = temp;
    }


    return s;
}

int main()

{
    char name[100];
    gets(name);
    if(strcmp(strrev(name),my_strrev(name)) == 0)
    {
        printf("SUCCESS!\n");
    }
    else
    {
        printf("ERROR!\n");
    }


    return main();
}
