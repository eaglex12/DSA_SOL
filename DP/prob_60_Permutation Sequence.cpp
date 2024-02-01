//  I have used here recursion for solving it....
 
 
 
 void fc(string &temp, int n, int k, vector<int>&num)
    {
        int cap=(permu(n)/(n));

        int range = (k)/ cap;
        
        int rem = (k)%cap;
        
        
        
        
        temp= temp + to_string(num[range]);
        
        cout<<temp<<endl;
        
        num.erase(num.begin()+ range);
        
        if(n-1==0)return;
        
        
        
        
        fc(temp , n-1, rem,num);
        
        
    }
    string getPermutation(int n, int k) {
        
        string temp;
        
        vector<int>num;
        
        for(int i=1;i<=n;i++)
        {
            
            num.push_back(i);

        }
        
        
        
        
        fc(temp,n,k-1 ,num);
        
        
        return temp;
        
        
        
    }
    
    
    int permu(int num)
    {
        int tempo=1;
        for(int i=1;i<=num;i++)
        {
            
            tempo=tempo*i;
        }
        
        return tempo;
    }