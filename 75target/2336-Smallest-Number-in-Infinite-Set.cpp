class SmallestInfiniteSet {
    int next=1;
    priority_queue<int,vector<int>,greater<int>> pq;
    set<int>add;
public:
    SmallestInfiniteSet() {
    }
        int popSmallest(){
            if(!pq.empty())
            {
                int sm=pq.top();
                if(sm<next){
                    pq.pop();
                    add.erase(sm);
                    return sm;
                }
            }
            return next++;
        }

    

    void addBack(int num) {
        if(num<next && add.find(num)==add.end())
        {
            pq.push(num);
            add.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */