int totalFruit(vector<int>& fruits){
  
        // sliding window
        // find longest continuous subarray that has exactly 2 distinct elements
  
      // hash map to store the frequency of the elements in the subarray
      unordered_map<int, int> count; 
  
        // variables i and j are used to keep track of the subarray boundaries
        int i, j; 
        
        // i at end, j from beginning
        for (i = 0, j = 0; j < fruits.size(); ++j){
          
            // increase count of the current fruit type
            count[fruits[j]]++; 
            
            if (count.size() > 2){ 
              
                // reduce the count of the first fruit and remove it from the map if its count becomes 0
                if (--count[fruits[i]] == 0)count.erase(fruits[i]); 
                
                // move the start of the subarray to the right
                i++; 
            }
        }
        return j - i; 
    }
