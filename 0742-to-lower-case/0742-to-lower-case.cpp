class Solution {
public:
    string toLowerCase(string s) {
        string result ="";
        for(char c : s)
        {
            if(c<='Z' && c>= 'A') result += (c+32);
            else result += c;
        }

        return result;
    }
};