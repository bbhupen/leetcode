class Solution {
public:
    
    static constexpr int K = 1000;
    
    
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int> count(2*K + 1);
        
        
        for (int num: arr){
            count[num + K]++;
        }
        
        sort(count.begin(), count.end());
        
        for (int i=0; i<2 * K; i++){
            if(count[i] && count[i] == count[i+1]){
                return false;
            }
        }
        
        return true;
        }
};