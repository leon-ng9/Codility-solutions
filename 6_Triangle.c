int cmp(const void * a, const void * b) {
    return *(int *)a - *(int *)b;
}

int triangular(long a, long b, long c) {
    return a + b > c && b + c > a && a + c > b;
}

int solution(int A[], int N) {
    qsort(A, N, sizeof(int), cmp);
    
    for (int i = 0; i < N - 2; i++) {
        if (triangular(A[i], A[i+1], A[i+2])) {
            return 1;
        }
    }
    
    return 0;
}