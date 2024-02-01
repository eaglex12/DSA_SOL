 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        deque<int>dq;
        
        vector<int>ans;
        
        
        int i=0,j=0;
        
        int n=nums.size();
        
        
        while(j<n)
        {
            while(dq.size()>0 && dq.back()<nums[j])
            {

                // Yahan pay isliye kiya taaki front may humesha max value rahey..
                dq.pop_back();

            }
            dq.push_back(nums[j]);
            
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k)
            {
                // cout<<dq.front()<<endl;
                ans.push_back(dq.front());
                

                // if isliye lagaya taaki agar max value abhki current range may na ho ,toh woh bahar chali jaye.
                if(nums[i]==dq.front())
                {dq.pop_front();}
                
                i++;
                j++;
                
                
            }
        }
        
        
        return ans;
      
        
    }