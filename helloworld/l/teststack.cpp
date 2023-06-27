class Solution {
public:
    bool searchArray(vector<vector<int>> array, int target) {
        int i = 0,j = array.size()-1;
        if(array.empty() || array[0].empty()){
            return false;
        }
        while(j>=0 && i<array.size()){
            if(array[i][j] == target){
                return true;
            }
            if(array[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};