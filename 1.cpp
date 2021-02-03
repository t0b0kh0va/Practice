//How Many X's?
    int countX(int L, int R, int X) {
        int sum = 0;
        for (int i = L+1; i < R; i++)
        {
            int n = i;
            while (n > 0){
                if (n % 10 == X)
                    sum++;
                n /= 10;
            }
        }
        return sum;
    }
