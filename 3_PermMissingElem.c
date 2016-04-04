int solution(int A[], int N) {
    int idealTotal = 0;
    int i;
    for (i = 1; i <= N+1; i++) {
        idealTotal += i;
    }
    
    int actualTotal = 0;
    for (i = 0; i < N; i++) {
        actualTotal += A[i];
    }
    
    return idealTotal - actualTotal;
}