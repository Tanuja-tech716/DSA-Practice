class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> s;
       for(int i=0;i<tokens.size();i++){
        if(isdigit(tokens[i][0])||(tokens[i][0]=='-'&&tokens[i].size()>1))
        s.push(stoi(tokens[i]));
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            switch(tokens[i][0]){
                case '+':s.push(b+a);break;
                case '-':s.push(b-a);break;
                case '*':s.push(b*a);break;
                case '/':s.push(b/a);break;
            }
        }
       }   
       int result=s.top();
       return result;
    }
};