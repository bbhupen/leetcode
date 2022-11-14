class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> mpp;
        
        for(auto i: arr){
            mpp[i]++;
        }
        
        set<int> set1;
        
        for(auto it: mpp){
            if(set1.count(it.second) > 0){
                return false;
            }
            else{
                set1.insert(it.second);
            }
        }
        
        return true;
    }
};