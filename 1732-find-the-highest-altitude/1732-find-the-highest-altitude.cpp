class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max =0;
        int cur = 0;
        for(int i=0 ;i < gain.size() ; i++)
        {
            cur += gain[i];
            if(cur>max) max = cur;
        }

        return max;
    }
};