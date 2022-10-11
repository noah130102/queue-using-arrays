#include <iostream>
#define n  10

using namespace std;
class Queue{
    private:
    int *arr;
    int front;
    int back;
    public:
    // Queue(){}
    
    Queue(){
        arr = new int[n];
        front = -1;
        back=-1;

    }
    void enqueue(int x);
    void dequeue();
    int peek();
    bool empty();

};
void Queue::enqueue(int x){
    if (back == n-1)
    {
        cout<<"Overflow"<<endl;
    }
    back++;
    arr[back]=x;

    if (front = -1)
    {
        front++;
    }
    
    
}
void Queue::dequeue(){
    if (front == -1 || front>back)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    front++;
    
}
int Queue::peek(){
    if (front == -1 || front>back)
    {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return arr[front];

}

bool Queue::empty(){

    if (front == -1 || front>back)
    {
        cout<<"Queue is empty"<<endl;
        return true;
    }
    return false;
}

int main (){
    Queue qt;
    qt.enqueue(1);
    qt.enqueue(2);
    qt.enqueue(3);

    cout<<qt.peek()<<endl;

    qt.dequeue();
    qt.dequeue();

    cout<<qt.peek()<<endl;

    qt.dequeue();

    qt.enqueue(9);
    cout<< qt.empty()<<endl;
    return 0;
}