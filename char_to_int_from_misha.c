#include <stdio.h> 
#include <string.h> 
#include <ctype.h>

int str_to_int(char* str){
    int num = 0; 
  
    for (int i = 0; str[i] != '\0'; i++) { 
        if (isdigit(str[i])){
            num = num * 10 + (str[i] - 48); 
        }
    } 
    return num;
}  


int main() { 
    char* str = "4213";
  
    printf("%d\n", str_to_int(str)); 
    return 0; 
}