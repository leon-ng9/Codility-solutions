int solution(int X, int A[], int N) {
    int *positionsFilled = calloc(X, sizeof(int));
    int numFilled = 0;
    
    int i;
    for (i = 0; i < N; i++) {
        if (A[i] <= X && positionsFilled[A[i] - 1] == 0 && numFilled <  X) {
            
            positionsFilled[A[i] - 1] = 1;
            numFilled++;
        }
        
        if (numFilled == X) {
            free(positionsFilled);
            return i;
        }
    }
    
    free(positionsFilled);
    return -1;
}        