class CQueue {
public:
    CQueue() {
        while(!res.empty()){
            res.pop();
        }
        while(!tmp.empty()){
            tmp.pop();
        }
    }

    void appendTail(int value) {
        res.push(value);
    }

    int deleteHead() {
        if(res.empty()){
            return -1;
        }
        while(!res.empty()){
            tmp.push(res.top());
            res.pop();
        }
        int num=tmp.top();
        tmp.pop();
        while(!tmp.empty()){
            res.push(tmp.top());
            tmp.pop();
        }
        return num;
    }
private:
    stack<int> res;
    stack<int> tmp;
};
/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */