// Last updated: 7/11/2025, 12:02:14 AM
class Solution 
{
    public:

    bool function(int val1, int val2)
    {
        if(val1 % 2 == 0 && val2 % 2 != 0)
        {
            return true;
        }
        else if(val1 % 2 != 0 && val2 % 2 == 0)
        {
            return true;
        }

        return false;
    }

    bool isArraySpecial(vector<int>& arr) 
    {
        int n = arr.size();

        for(int i = 0; i < n - 1; i ++)
        {
            bool ans = function(arr[i], arr[i + 1]);

            if(ans == false)
            {
                return false;
            }
        }

        return true;
    }
};