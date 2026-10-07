class Solution {
public:
    int findTheWinner(int n, int k) {
       queue<int> q;
       for(int i=1;i<=n;i++)
       q.push(i);
       while(q.size()>1){
        int count=1;
        while(count<k){
            int p=q.front();
            q.pop();
            q.push(p);
            count++;
        }
        q.pop();
       }
       return q.front();
    }
};