#include <stdio.h>

void dec_bin(int num)//dec_bin means decimal to binary.
{
    int loop = 1,binary[100],flag = 10,flag2 = -1;
    while(num!= 0)
    {
        if(flag == 10)
        {
            flag2++;
            loop = 1;
            flag = 0;
            binary[flag2] = 0;
        }
        else
        {
            binary[flag2] += loop*(num%2);
            num/=2;
            flag++;
            loop*=10;
        }
    }
    while(flag2>=0)
    {

        if(num == 0)
        {
            printf("%d",binary[flag2]);
            num = 1;
        }
        else
        {
            printf("%010d",binary[flag2]);
        }
        flag2--;
    }
    printf("\n");
}

int bin_dec(int num)//bin_dec means binary to decimal.
{
    int loop,decimal = 0;
    for(loop = 1 ; num != 0 ; loop*=2)
    {
        decimal += loop*(num%10);
        num/=10;
    }
    return decimal;

}

int main()

{
    int number;
    char c1,c2;// 'c' .
    printf("(D - Decimal B - Binary H - Hexadecimal O - Octal E - End)\n");

    while(c1 != 'E')
    {
        printf("Convert From: ");
        c1 = getchar();
        fflush(stdin);

        if(c1 == 'D' || c1 == 'd')
        {
            printf("Convert To: ");
            c2 = getchar();
            fflush(stdin);
            printf("\nDecimal: ");
            scanf("%i",&number);
            fflush(stdin);
            if(c2 == 'B' || c2 == 'b')
            {
                printf("Binary: ");
                dec_bin(number);
                printf("\n");
            }
            else if(c2 == 'H' || c2 == 'h')
            {
                printf("Hexadecimal: %X\n\n",number);
            }
            else if(c2 == 'O' || c2 == 'o')
            {
                printf("Octal: %o\n\n",number);
            }
        }
        else if(c1 == 'B' || c1 == 'b')
        {
            printf("Convert To: ");
            c2 = getchar();
            fflush(stdin);
            printf("\nBinary: ");
            scanf("%i",&number);
            fflush(stdin);
            if(c2 == 'D' || c2 == 'd')
            {
                printf("Decimal: %d\n\n",bin_dec(number));
            }
            else if(c2 == 'H' || c2 == 'h')
            {
                printf("Hexadecimal: %X\n\n",bin_dec(number));
            }
            else if(c2 == 'O' || c2 == 'o')
            {
                printf("Octal: %o\n\n",bin_dec(number));
            }
        }
        else if(c1 == 'H' || c1 == 'h')
        {
            printf("Convert To: ");
            c2 = getchar();
            fflush(stdin);
            printf("\nHexadecimal: ");
            scanf("%x",&number);
            fflush(stdin);
            if(c2 == 'B' || c2 == 'b')
            {
                printf("Binary: ");
                dec_bin(number);
                printf("\n\n");
            }
            else if(c2 == 'D' || c2 == 'd')
            {
                printf("Decimal: %d\n\n",number);
            }
            else if(c2 == 'O' || c2 == 'o')
            {
                printf("Octal: %o\n\n",number);
            }
        }
        else if(c1 == 'O' || c1 == 'o')
        {
            printf("Convert To: ");
            c2 = getchar();
            fflush(stdin);
            printf("\nOctal: ");
            scanf("%o",&number);
            fflush(stdin);
            if(c2 == 'B' || c2 == 'b')
            {
                printf("Binary: ");
                dec_bin(number);
                printf("\n\n");
            }
            else if(c2 == 'H' || c2 == 'h')
            {
                printf("Hexadecimal: %X\n\n",number);
            }
            else if(c2 == 'D' || c2 == 'd')
            {
                printf("Decimal: %d\n\n",number);
            }
        }
    }


    return 0;
}
