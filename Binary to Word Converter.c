#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)

{
    char binary[100],*pt;
    int sum = 0,i = 0,len;
    pt = binary;
    gets(binary);
    len = strlen(binary);
    pt = pt + len - 1;
    while(len != 0)
    {
        sum += (*(pt --) - 48)*pow(2,i);
        i++;
        if(i == 8)
        {
            printf("%c",sum);
            sum = 0;
            i = 0;
        }
        len--;
    }


    return 0;
}
