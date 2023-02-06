class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

       //creating new array of 2n elements 
       vector<int>ans(2*n);

        for(int i=0;i<n;i++){

            //initialzing elements at the x-i place
            ans[2*i]=nums[i];

            //initializing elements at the y-i place
            ans[2*i+1]=nums[n+i];
        }
        return ans; 
    }
};
