class RecentCounter {
public:
   stack<int> s1, s2;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int lb=t-3000, c=0;
        s1.push(t);
        while(!s1.empty()&&(s1.top()>=lb)){
           c++;
           s2.push(s1.top());
           s1.pop();
        }
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */