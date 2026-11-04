//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class AbstractQueue {
//public:
//    virtual void enQueue(T value) = 0;
//    virtual T deQueue() = 0;
//    virtual T front() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//
//    virtual ~AbstractQueue() {}
//};
//
//template <typename T>
//class myQueue : public AbstractQueue<T> {
//private:
//    T* arr;
//    int capacity;
//    int count;
//    int frontIndex;
//    int rear;
//
//public:
//    myQueue(int size) {
//        capacity = size;
//        arr = new T[capacity];
//        count = 0;
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    void enQueue(T value) override {
//        if (isFull()) {
//            cout << "Queue is Full!" << endl;
//            return;
//        }
//
//        rear = (rear + 1) % capacity;
//        arr[rear] = value;
//        count++;
//
//        cout << value << " added to queue." << endl;
//    }
//
//    T deQueue() override {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//
//        T value = arr[frontIndex];
//        frontIndex = (frontIndex + 1) % capacity;
//        count--;
//
//        return value;
//    }
//
//    T front() const override {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//
//        return arr[frontIndex];
//    }
//
//    bool isEmpty() const override {
//        return count == 0;
//    }
//
//    bool isFull() const override {
//        return count == capacity;
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return;
//        }
//
//        cout << "Queue elements (Front to Rear): ";
//
//        for (int i = 0; i < count; i++) {
//            cout << arr[(frontIndex + i) % capacity] << " ";
//        }
//
//        cout << endl;
//    }
//
//    ~myQueue() {
//        delete[] arr;
//    }
//};
//
//int main() {
//    int size;
//
//    cout << "Enter maximum size of Queue: ";
//    cin >> size;
//
//    if (size <= 0) {
//        cout << "Invalid queue size!" << endl;
//        return 0;
//    }
//
//    myQueue<int> q(size);
//
//    int choice;
//    int value;
//
//    do {
//        cout << "\n===== QUEUE MENU =====" << endl;
//        cout << "1. Enqueue (Insert)" << endl;
//        cout << "2. Dequeue (Remove)" << endl;
//        cout << "3. Front Element" << endl;
//        cout << "4. Display Queue" << endl;
//        cout << "5. Check Empty" << endl;
//        cout << "6. Check Full" << endl;
//        cout << "0. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value to insert: ";
//            cin >> value;
//            q.enQueue(value);
//            break;
//
//        case 2:
//            if (!q.isEmpty())
//                cout << "Removed element: " << q.deQueue() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
//            break;
//
//        case 3:
//            if (!q.isEmpty())
//                cout << "Front element: " << q.front() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 5:
//            if (q.isEmpty())
//                cout << "Queue is Empty." << endl;
//            else
//                cout << "Queue is Not Empty." << endl;
//            break;
//
//        case 6:
//            if (q.isFull())
//                cout << "Queue is Full." << endl;
//            else
//                cout << "Queue is Not Full." << endl;
//            break;
//
//        case 0:
//            cout << "Program Exited Successfully!" << endl;
//            break;
//
//        default:
//            cout << "Invalid Choice! Try Again." << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
