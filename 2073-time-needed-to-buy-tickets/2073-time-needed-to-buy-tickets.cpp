class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int time=0;
       queue<int> q;
       for(int i=0;i<tickets.size();i++)
       q.push(i);
       while(tickets[k]>0){
        tickets[q.front()]--;
        time++;
        if(tickets[q.front()]==0){
             int p=q.front();
             if(p==k)
             break;
             else
             q.pop();
        }
        else{
            int p=q.front();
            q.pop();
            q.push(p);
        }
       }
       return time; 
    }
};