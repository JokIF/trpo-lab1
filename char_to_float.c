#include <stdio.h>
#include <math.h>


double char_to_float(char* symb);

int main()
{
    char char_float[] = "123.665";
    double float_num = char_to_float(char_float);
    printf("%lf", float_num);
}

double char_to_float(char* symb)
{
    double num = 0;
    int counter = 0;
    short counter_flag = 0;
    while(*symb)
    {
        if (*symb == '.')
        {
            symb++;
            counter_flag = 1;
        }
        num = num*10 + (*symb++ - '0');
        
        if (counter_flag)
        {
            counter++;
        }
    }
    return num / pow(10, counter);
}