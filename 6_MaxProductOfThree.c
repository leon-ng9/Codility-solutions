#define max(a,b) (a>b?a:b)

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int solution(int A[], int N) {
    qsort(A, N, sizeof(int), cmp);

    return max(A[0]*A[1]*A[N-1], A[N-3]*A[N-2]*A[N-1]);
}