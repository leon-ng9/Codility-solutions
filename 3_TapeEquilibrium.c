int solution(int A[], int N) {   
    int leftSum = A[0];
    int rightSum = A[1];
    int i;
    for (i = 2; i < N; i++) {
        rightSum += A[i];
    }
    
    int minAbsSum = abs(leftSum - rightSum);
    
    for (i = 1; i < N - 1; i++) {
        leftSum += A[i];
        rightSum -= A[i];
        if (abs(leftSum - rightSum) < minAbsSum) {
            minAbsSum = abs(leftSum - rightSum);
        }
    }
    
    return minAbsSum;
}