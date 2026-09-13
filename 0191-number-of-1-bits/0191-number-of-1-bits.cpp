class Solution {
public:
    int hammingWeight(int n) {
        int weight = 0;
        int res =0;
        int x;
        while(n!=0)
        {
            x = n%2;
            if(x==1) res++;
            n/=2;
        }

        return res;
    }
};