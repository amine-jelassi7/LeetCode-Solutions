class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        std::vector<int> freq(10, 0);
        for (int d : digits) {
            freq[d]++;
        }
        
        int valid = 0;
        
        for (int num = 100; num < 1000; num += 2) {
            int d1 = num / 100;        
            int d2 = (num / 10) % 10;  
            int d3 = num % 10;         
            
            
            std::vector<int> req(10, 0);
            req[d1]++;
            req[d2]++;
            req[d3]++;
            
            if (req[d1] <= freq[d1] && req[d2] <= freq[d2] && req[d3] <= freq[d3]) {
                valid++;
            }
        }
        
        return valid;
    }
};