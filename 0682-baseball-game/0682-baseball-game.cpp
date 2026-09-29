class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto x: operations){
            if(x!="D"&&x!="C"&&x!="+")
            st.push(stoi(x));
            else if(x=="+"){
                int a,b;
                if(!st.empty()){
                    a=st.top();
                    st.pop();
                     b=st.top();
                    st.pop();
                }
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            else if(x=="D"){
                if(!st.empty()){
                    st.push(2*st.top());
                }
            }
            else if(x=="C"){
                if(!st.empty())
                st.pop();
            }
        }
        int result=0;
        while(!st.empty()){
        result+=st.top();
        st.pop();
        }
        return result;
    }
};