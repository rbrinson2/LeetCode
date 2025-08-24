#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int romanToInt(char* s) {
    int sum = 0; 
    for (int i = 0; i < strlen(s); i++){
        switch (s[i]) { 
            case 'I' : 
                sum = s[i+1] == 'V' ? sum + 4 : (
                    s[i+1] == 'X' ? sum + 9 : sum + 1
                );
                if (s[i+1] == 'V' || s[i+1] == 'X') i++;
                break;
            case 'V' :
                sum += 5;
                break;
            case 'X' :
                sum = s[i+1] == 'L' ? sum + 40 : (
                    s[i+1] == 'C' ? sum + 90 : sum + 10
                ); 
                if (s[i+1] == 'L' || s[i+1] == 'C') i++;
                break;
            case 'L' :
                sum +=50;
                break;
            case 'C' :
                sum = s[i+1] == 'D' ? sum + 400 : (
                    s[i+1] == 'M' ? sum + 900 : sum + 100
                );
                if (s[i+1] == 'D' || s[i+1] == 'M') i++;
                break;
            case 'D' :
                sum += 500;
                break;
            case 'M' :
                sum += 1000;
                break;
            default: break;
        }
    }
    return sum;
}

int main(void)
{
            
    char s[] = "MCMXCIV";

    printf("%d\n", romanToInt(s));

    return EXIT_SUCCESS;
}
