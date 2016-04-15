int solution(int A[], int N) {
    int bestProfit = 0;
    int min = A[0];
    
    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            continue;
        }
        
        if (A[i] - min > bestProfit) {
            bestProfit = A[i] - min;
        }
    }
    
    return bestProfit;
}