int solution(int A[], int N) {
    int numWest = 0;
    int numPasses = 0;
    for (int i = N-1 ; i >= 0 ; i--) {
        if (A[i] == 1) {
            numWest++;
        } else if (A[i] == 0) {
            numPasses += numWest;
            if (numPasses > 1000000000) {
                return -1;
            }
        }
    }
    
    return numPasses;
}