class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int time=0;
       queue<int> q;
       for(int i=0;i<tickets.size();i++)
       q.push(i);
       while(true){
        int p=q.front();
        tickets[p]--;
        time++;
        if(tickets[q.front()]==0&&p==k){
            break;
        }
        else if(tickets[q.front()]==0){
            q.pop();
        }
        else{
            q.pop();
            q.push(p);
        }
       }
       return time; 
    }
};