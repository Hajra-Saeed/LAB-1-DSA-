//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Stack {
//private:
//    T arr[100];
//    int topIndex;
//
//public:
//    Stack() {
//        topIndex = -1;
//    }
//
//    void push(T value) {
//        if (topIndex < 99) {
//            arr[++topIndex] = value;
//        }
//    }
//
//    T pop() {
//        if (topIndex == -1)
//            return T();
//
//        return arr[topIndex--];
//    }
//
//    bool isEmpty() {
//        return topIndex == -1;
//    }
//};
//
//template <typename T>
//class Queue {
//private:
//    T arr[100];
//    int capacity;
//    int count;
//    int frontIndex;
//    int rear;
//
//public:
//    Queue(int size) {
//        capacity = size;
//        count = 0;
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    void enqueue(T value) {
//        if (count == capacity) {
//            cout << "Queue is Full!" << endl;
//            return;
//        }
//
//        rear = (rear + 1) % capacity;
//        arr[rear] = value;
//        count++;
//    }
//
//    T dequeue() {
//        if (isEmpty())
//            return T();
//
//        T value = arr[frontIndex];
//        frontIndex = (frontIndex + 1) % capacity;
//        count--;
//
//        return value;
//    }
//
//    T front() {
//        if (isEmpty())
//            return T();
//
//        return arr[frontIndex];
//    }
//
//    bool isEmpty() {
//        return count == 0;
//    }
//
//    int size() {
//        return count;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return;
//        }
//
//        for (int i = 0; i < count; i++) {
//            cout << arr[(frontIndex + i) % capacity] << " ";
//        }
//
//        cout << endl;
//    }
//
//    void reverseK(int k) {
//        if (k <= 1 || isEmpty())
//            return;
//
//        if (k > count)
//            k = count;
//
//        Stack<T> s;
//
//        for (int i = 0; i < k; i++) {
//            s.push(dequeue());
//        }
//
//        while (!s.isEmpty()) {
//            enqueue(s.pop());
//        }
//
//        int remaining = count - k;
//
//        for (int i = 0; i < remaining; i++) {
//            enqueue(dequeue());
//        }
//    }
//};
//
//int main() {
//    int n, k;
//    int value;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    if (n < 0 || n > 100) {
//        cout << "Invalid number of elements!" << endl;
//        return 0;
//    }
//
//    Queue<int> q(100);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter element " << i + 1 << ": ";
//        cin >> value;
//        q.enqueue(value);
//    }
//
//    cout << "\nOriginal Queue: ";
//    q.display();
//
//    cout << "Enter K: ";
//    cin >> k;
//
//    if (k < 0) {
//        cout << "Invalid K!" << endl;
//        return 0;
//    }
//
//    q.reverseK(k);
//
//    cout << "\nQueue after reversing first K elements: ";
//    q.display();
//
//    return 0;
//}
