#include <stdio.h>
#include <math.h>


int char_to_int(char* symb);

int main()
{
    char char_int[] = "123";
    int int_num = char_to_int(char_int);
    printf("%d", int_num);
}

int char_to_int(char* symb)
{
    int num = 0;
    while(*symb)
    {
        num = num*10 + (*symb++ - '0');
    }
    
    return num;
}