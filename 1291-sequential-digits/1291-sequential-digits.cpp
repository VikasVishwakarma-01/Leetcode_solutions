class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int> vec = {12, 23, 34, 45, 56, 67, 78, 89,
                           123, 234, 345, 456, 567, 678, 789,
                           1234, 2345, 3456, 4567, 5678, 6789, 
                           12345, 23456, 34567, 45678, 56789, 
                           123456, 234567, 345678, 456789,
                           1234567, 2345678, 3456789, 
                           12345678, 23456789,
                           123456789 };
        vector<int> ans;

        for(int i = 0; i < vec.size(); i++) {
            if(vec[i] >= low && vec[i] <= high)
                ans.push_back(vec[i]);
        }

        return ans;
    }
};
/*
- phli bat hame ek array if integer return karna hai
- integer sorted hone chahiye
- jo limit di gayi hai low to high no uske bich main rhne chahiye
- aur no ki digit previous digit se badi honi chahiye, iska mtlb no is tarah ho ki uske bad wala bada ho
- sol 1: ek kam kar skte hai, no 10 to 10^9 tak jitne aise no hai sbko ek sath set main dal dete hai phir sort karke, loop laga kar return kar denge
*/