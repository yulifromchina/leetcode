//sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> temp;
        result.push_back(temp);
        
        int n1 = nums.size();
        for(int i=0;i<n1;++i)
        {
            int n2 = result.size();
            for(int j=0;j<n2;++j)
            {
                temp = result[j];
                temp.push_back(nums[i]);
                result.push_back(temp);
            }
        }
        return result;