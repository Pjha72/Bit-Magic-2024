

unsigned int getFirstSetBit(int n)
    {
        if(n==0) return 0;
        unsigned int cnt =1;
        while(n!=0){
            if(n&1){
                return cnt;
            }
            cnt++;
            n = n>>1;
        }
        return cnt;
    }