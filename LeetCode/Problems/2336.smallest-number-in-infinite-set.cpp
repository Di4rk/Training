/*
 * @lc app=leetcode id=2336 lang=cpp
 *
 * [2336] Smallest Number in Infinite Set
 */

// @lc code=start
class SmallestInfiniteSet {
    int current_min;
    set<int> added_back;
public:
    SmallestInfiniteSet() {
        current_min = 1;
    }
    
    int popSmallest() {
        if(!added_back.empty()){
            int smallest = *added_back.begin();
            added_back.crase(added_back.begin());
            return smallest;
        }
        int result = current_min;
        current_min++;
        return result;
    }
    
    void addBack(int num) {
        if(num < current_min){
            added_back.push(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
// @lc code=end

