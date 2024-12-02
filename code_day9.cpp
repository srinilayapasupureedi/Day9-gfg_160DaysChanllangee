vector<int> findSplit(vector<int>& arr) {
        // code here
        //lets find the sum of elements in the array
        int n=arr.size();
        int total_Sum=accumulate(arr.begin(),arr.end(),0);
        if(total_Sum%3!=0)
        {
            return {-1,-1};
        }
        int first_Split=-1;
        int target_Sum=total_Sum/3;
        int curr_Sum=0;
        for(int i=0;i<n;i++)
        {
            curr_Sum+=arr[i];
            if(curr_Sum==target_Sum)
            {
                first_Split=i;
                break;
            }
        }
        
        //reset the curr_sum
        int second_split=-1;
        curr_Sum=0;
        for(int j=first_Split+1;j<n;j++)
        {
            curr_Sum+=arr[j];
            if(curr_Sum==target_Sum)
            {
                second_split=j;
                break;
            }
        }
        if(first_Split!=-1&&second_split!=-1&&second_split<n)
        {
            return{first_Split,second_split};
        }
        return {-1,-1};
           
        
    }
