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
    int hasDigit = 0;

    for(int i=0; i<len; i++) {
        if(isdigit(ps[i])) {
            hasDigit = 1;
            break;
        }
    }

    if(len == 5 && hasDigit)
        return 1;
    else
        return 0;
}

