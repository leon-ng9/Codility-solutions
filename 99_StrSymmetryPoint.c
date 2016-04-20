#include <string.h>

int solution(char *S) {
    int length = strlen(S);
    if (length % 2 == 0) {
        return -1;
    }
    
    for (int i = 0; i < length/2; i++) {
        if (S[i] != S[length - 1 -i]) {
            return -1;
        }
    }
    
    return length/2;
}