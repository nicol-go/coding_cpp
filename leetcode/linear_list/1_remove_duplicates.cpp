/* Description:
Given a sorted array, remove the duplicates in place such that each element appear only once
and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].
*/

/* compile command: g++ (filename).cpp -o object */

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int remove_duplicates(vector<int>& nums){
            if(nums.empty()){
                return 0;
            }

            int index = 0;
            for(int i = 1; i < nums.size();i++){
                if(nums[index] != nums[i]){
                    nums[++index] = nums[i];
                }
            }
            return index + 1;
        }
};

int main()
{
    vector<int> nums = {1,1,2,2,3,3,3,4};
    int result = 0;
    Solution s;
    for(auto x:nums){
        cout<< x << ' ';
    }
    cout << endl;

    result = s.remove_duplicates(nums);
    for(int i = 0; i< result;i++){
        cout << nums.at(i)<<' ';
    }
    cout << endl;

    return 0;
}