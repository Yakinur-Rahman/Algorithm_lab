 vector<int>temp;
       
       for(auto &i:nums){
         int cnt=0;
          for(auto &j:nums){
          if(j<i)
          cnt++;
       }
        temp.insert(temp.end(),cnt);
     }
     return temp;