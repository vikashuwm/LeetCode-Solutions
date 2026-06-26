class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> list;
        for(int i : nums){
            if(list.find(i) != list.end()) return true;
            list.insert(i);
        }
        return false;
    }
};