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
//    void pop() {
//        if (topIndex >= 0) {
//            topIndex--;
//        }
//    }
//
//    T top() {
//        return arr[topIndex];
//    }
//
//    bool empty() {
//        return topIndex == -1;
//    }
//};
//
//template <typename T>
//class Queue {
//private:
//    Stack<T> s1, s2;
//
//    void transfer() {
//        while (!s1.empty()) {
//            s2.push(s1.top());
//            s1.pop();
//        }
//    }
//
//public:
//    void enqueue(T value) {
//        s1.push(value);
//        cout << value << " inserted successfully." << endl;
//    }
//
//    T dequeue() {
//        if (s2.empty()) {
//            transfer();
//        }
//
//        if (s2.empty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//
//        T value = s2.top();
//        s2.pop();
//
//        return value;
//    }
//
//    T front() {
//        if (s2.empty()) {
//            transfer();
//        }
//
//        if (s2.empty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//
//        return s2.top();
//    }
//
//    bool isEmpty() {
//        return s1.empty() && s2.empty();
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return;
//        }
//
//        Stack<T> temp = s2;
//        Stack<T> temp2;
//
//        while (!temp.empty()) {
//            temp2.push(temp.top());
//            temp.pop();
//        }
//
//        while (!temp2.empty()) {
//            cout << temp2.top() << " ";
//            temp2.pop();
//        }
//
//        temp = s1;
//        Stack<T> temp3;
//
//        while (!temp.empty()) {
//            temp3.push(temp.top());
//            temp.pop();
//        }
//
//        while (!temp3.empty()) {
//            cout << temp3.top() << " ";
//            temp3.pop();
//        }
//
//        cout << endl;
//    }
//};
//
//int main() {
//    Queue<int> q;
//    int choice, value;
//
//    do {
//        cout << "\n===== QUEUE USING TWO STACKS =====" << endl;
//        cout << "1. Enqueue" << endl;
//        cout << "2. Dequeue" << endl;
//        cout << "3. Front Element" << endl;
//        cout << "4. Display Elements" << endl;
//        cout << "5. Check Empty" << endl;
//        cout << "0. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            q.enqueue(value);
//            break;
//
//        case 2:
//            if (!q.isEmpty())
//                cout << "Removed Element: " << q.dequeue() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
//            break;
//
//        case 3:
//            if (!q.isEmpty())
//                cout << "Front Element: " << q.front() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
//            break;
//
//        case 4:
//            cout << "Queue Elements: ";
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
//        case 0:
//            cout << "Program Exited!" << endl;
//            break;
//
//        default:
//            cout << "Invalid Choice!" << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
