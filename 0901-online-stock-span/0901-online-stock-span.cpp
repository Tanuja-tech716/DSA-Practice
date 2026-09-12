class StockSpanner {
public:
    vector<int> s;
    StockSpanner() {
       
    }
    
    int next(int price) {
        int count=1;
        if(s.size()==0)
        count=1;
        else{
        int i=s.size()-1;
        while(i>=0&&s[i]<=price){
            count++;
            i--;
        }
        }
        s.push_back(price);
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */