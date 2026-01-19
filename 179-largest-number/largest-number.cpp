class Solution {
public:
    string largestNumber(vector<int>& nums) {
        

      auto myComparator = [](int& a,int& b){
        string s1 = to_string(a); //bcz conactenation is string operation
        string s2 = to_string(b);

        if(s1 + s2 > s2 + s1){ // s1 comes first
            return true;
        }
        else{
            return false;
        }
      };


        sort(begin(nums),end(nums),myComparator); // customised comparator will give sorted array
        //base case
        if(nums[0] == 0){
            return "0";
        }


        string result = "";

        for(int& num : nums){
            result += to_string(num); // concatenation
        }
        return result;
    }
};