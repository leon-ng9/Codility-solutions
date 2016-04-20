#include <math.h>

int solution(int N) {
    for (int i = ceil(sqrt(N)); i >= 1; i--) {
        if (N % i == 0) {
            return 2 * (i + N/i);
        }
    }
    
    return -1; // should not happen
}