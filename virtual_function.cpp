//Pure virtual functions overriding
#include <iostream>
#include <vector>
using namespace std;
class List {
public:
    virtual void store(int data) = 0;
    virtual int retrieve() = 0;
};
class Stack : public List {
    private:
    vector<int> stack;
    public:
    void store(int data) override {
        stack.push_back(data);
    }
    int retrieve() override {
        int data = stack.back();
        stack.pop_back();
        return data;
    }
};
class Queue : public List {
    private:
    vector<int> queue;
    public:
    void store(int data) override {
        queue.push_back(data);
    }
    int retrieve() override {
        int data = queue.front();
        queue.erase(queue.begin());
        return data;
    }
};
int main() {
    List* stack = new Stack();
    List* queue = new Queue();
    stack->store(10);
    stack->store(20);
    cout << "Stack top: " << stack->retrieve() << endl;
    cout << "Stack top: " << stack->retrieve() << endl;
    queue->store(30);
    queue->store(40);
    cout << "Queue front: " << queue->retrieve() << endl;
    cout << "Queue front: " << queue->retrieve() << endl;
    delete stack;
    delete queue;
    return 0;
}