class Solution {
public:
    bool checkValidString(string s) {
        int cmin = 0;
        int cmax = 0;
        for(char c : s)
        {
            if (c==')')
            {
                cmin--;
                cmax--;
            }
            else if (c=='(')
            {
                cmin++;
                cmax++;
            }
            else
            {
                cmax++;
                cmin--;
            }
            if (cmax<0) return false;
            cmin = max(0,cmin);
        }
        
        return cmin==0;
    }
};