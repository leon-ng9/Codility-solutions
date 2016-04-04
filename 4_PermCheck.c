int solution(int A[], int N) {
    int *found = calloc(N, sizeof(int));
    
    for (int i = 0; i < N; i++) {
        found[(A[i]-1) % N]++; // % N to guard A[i] > N
        if (A[i] > N || found[A[i]-1] > 1) {
            free(found);
            return 0;
        }
    }
    free(found);
    return 1;
}