#include <math.h>

int solution(int N) {
    int count = 0;
    for (int i = 1; i < sqrt(N); i++) {
        if (N % i == 0) {
            count += 2;
        }
    }
    
    if (sqrt(N) == (int)sqrt(N)) {
        count++;
    }
    
    return count;
}