int solution(int N) {
    int longestStreak = 0;
    int currStreak = 0;
    int active = 0;
    while (N > 0) {
        if ((N & 1) == 1 && !active) {
            active = 1;
        } else if ((N & 1) == 1 && active) {
            if (currStreak > longestStreak) {
                longestStreak = currStreak;
            }
            currStreak = 0;
        } else if ((N & 1) == 0 && active) {
            currStreak++;
        }
        
        N = N >> 1;
    }
    
    return longestStreak;
}