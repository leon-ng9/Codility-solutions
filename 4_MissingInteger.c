int solution(int A[], int N) {
    int *found = calloc(N+1, sizeof(int));
    
    for (int i = 0; i < N; i++) {
        if (0 < A[i] && A[i] <= N) {
            found[A[i]] = 1;
        }
    }
    
    for (int i = 1; i < N+1; i++) {
        if (found[i] == 0) {
            free(found);
            return i;
        }
    }
    
    free(found);
    return N+1;
}