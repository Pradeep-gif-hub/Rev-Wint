class myQueue {
  public:
    int *arr;
    int front,rear,cap,size;

    myQueue(int n) {
        cap=n;
        arr=new int[n];
        front=0;
        rear=0;
        size=0;
    }

    bool isEmpty() {
        return size==0;
    }

    bool isFull() {
        return size==cap;
    }

    void enqueue(int x) {
        if(isFull())return;
        arr[rear]=x;
        rear=(rear+1)%cap;
        size++;
    }

    void dequeue() {
        if(isEmpty())return;
        front=(front+1)%cap;
        size--;
    }

    int getFront() {
        if(isEmpty())return -1;
        return arr[front];
    }

    int getRear() {
        if(isEmpty())return -1;
        return arr[(rear-1+cap)%cap];
    }
};
