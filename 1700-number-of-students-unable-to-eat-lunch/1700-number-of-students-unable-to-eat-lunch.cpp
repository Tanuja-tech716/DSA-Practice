class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int result=students.size();
        queue<int> q;
        stack<int> s;
        bool can_eat=true;
        for(int x: students){
          q.push(x);
        }
        for(int i=(int)sandwiches.size()-1;i>=0;i--)
        s.push(sandwiches[i]);
        while((!q.empty()&&!s.empty())&&(can_eat)){
           if(q.front()==s.top()){
            q.pop();
            s.pop();
            result--;
           }
           else{
            int s=q.front();
            q.pop();
            q.push(s);
           }
           queue<int> temp=q;
           can_eat=false;
           while(!temp.empty()){
             if(temp.front()==s.top()){
             can_eat=true;
             break;
             }
             temp.pop();
           }
        }
        return result;
    }
};