#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkValidPass(char *ps);

int main() {
    char password[64];
    printf("Enter password : ");
    scanf("%s", password);

    if(checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    int upperCount = 0;
    int digitCount = 0;
    int usedUpper[26] = {0}; 

    if(len < 5 || len > 8) return 0;

    for(int i=0; i<len; i++) {
        if(isupper(ps[i])) {
            upperCount++;
            int idx = ps[i] - 'A';
            if(usedUpper[idx]) {
                return 0; 
            }
            usedUpper[idx] = 1;
        }
        if(isdigit(ps[i])) digitCount++;
    }

    if(upperCount >= 2 && digitCount >= 2)
        return 1;
    else
        return 0;
}

