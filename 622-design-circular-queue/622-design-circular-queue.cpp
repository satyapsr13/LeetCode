
class MyCircularQueue {
    vector<int>cq;
    int size=0;
    int head=0;
    int limit=0;
    int tail=0;
public:
    MyCircularQueue(int k) {
        
        limit=k;
        cq.resize(k,-1);
    }
    
    bool enQueue(int value) {
        
        if(isFull())return false;
        
        if(isEmpty()){
            head=tail=0;
            cq[head]=value;
            size++;
            return 1;
        }
        
        tail++;
        tail%=limit;
        cq[tail]=value;
        size++;
        return 1;
        
    }
    
    bool deQueue() {
        if(isEmpty())
        return false;
       
        head=head+1;
        head%=limit;
        size--;
        
        return 1;
        
    }
    
    int Front() {
    
 
        return isEmpty()?-1:cq[head];
    }
    
    int Rear() {
        
        return isEmpty()?-1:cq[tail];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        
        return size==limit;
    }
    
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */