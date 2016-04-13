int cmp(const void * a, const void * b) {
    return *(int *)a - *(int *)b;
}

int solution(int A[], int N) {
    if (N < 2) {
        return N;
    }
    
    qsort(A, N, sizeof(int), cmp);
    
    int numDistinct = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i-1]) {
            numDistinct++;
        }
    }
    
    return numDistinct;
}