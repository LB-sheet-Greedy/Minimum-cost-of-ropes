long long minCost(long long a[], long long n) {
        // Your code here
        
        //REFERENCE >> code library utube
        
        //priority queue me bhi apan ne minheap lagaaya hai bcoz minimum chaiye har baar
        //pq se kaam simple hora varna vector lagaake complicated hori hai chize
    
        //har baar do do element pop karo smallest wale and sum vaapas pq me bharo
        //last me jab pq me ek hi element bachega tab stop ho jaana
        
        /*
        Complexity Analysis:

Time Complexity: O(nLogn), assuming that we use a O(nLogn) sorting algorithm. 
Note that heap operations like insert and extract take O(Logn) time.

Auxiliary Complexity: O(n). 
The space required to store the values in min heap
        */
        
        long long sum=0;
        
        if(n==1)
        {
            return 0;
        }
        
        //ascending me sort karne ko greater use karte apan
        priority_queue<long long,vector<long long>, greater<long long>>pq;
        
        //array elements bharo pq me taaki arrange ho jaaye vo
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
        }
        
        while(pq.size()>1)
        {
            long long x=pq.top();    //first smallest element store kiya
        pq.pop();                //nikaala usko
        
        long long y=pq.top();    //second smallest element store kiya
        pq.pop();                //nikaala usko
        
        
        sum+=(x+y);
        
        //sum ko waapis pq me bharo
        pq.push(x+y);         //kyuki sum change hote rahega
        }
        
        return sum;
    }
