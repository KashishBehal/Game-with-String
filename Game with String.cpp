class Solution{
public:
    int minValue(string s, int k){
       unordered_map<char , int>m;
       for(int i=0;i<s.length();i++){
           m[s[i]]++;
       }
       priority_queue<int>pq;
       for(auto x:m){
           pq.push(x.second);
       }
       while(k!=0){
           int a=pq.top();
             pq.pop();
           a--;
         
           pq.push(a);
           k--;
       }
       int sum=0;
       while(!pq.empty()){
           int b=pq.top();
           sum=sum+(b*b);
           pq.pop();
       }
       return sum;
    }
};
