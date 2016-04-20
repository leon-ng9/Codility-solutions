int solution(int K, int A[], int N) {
    int currLength = A[0];
    
    int count = 0;
    for (int i = 1; i < N; i++ ) {
        if (currLength >= K) {
            count++;
            currLength = A[i];
        } else {
            currLength += A[i];
        }
    }
    
    // check last rope
    if (currLength >= K) {
        count++;
    }
    
    return count;
}