//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Queue {
//private:
//    T arr[100];
//    int frontIndex;
//    int rear;
//    int count;
//    int capacity;
//
//public:
//    Queue(int size) {
//        capacity = size;
//        frontIndex = 0;
//        rear = -1;
//        count = 0;
//    }
//
//    void enqueue(T ticket_id) {
//        if (count == capacity) {
//            cout << "Ticket Queue is Full!" << endl;
//            return;
//        }
//
//        if (ticket_id < 1000 || ticket_id > 9999) {
//            cout << "Ticket ID must be 4 digits!" << endl;
//            return;
//        }
//
//        rear = (rear + 1) % capacity;
//        arr[rear] = ticket_id;
//        count++;
//
//        cout << "Ticket " << ticket_id << " added successfully!" << endl;
//    }
//
//    T dequeue() {
//        if (isEmpty()) {
//            cout << "No pending tickets!" << endl;
//            return T();
//        }
//
//        T ticket = arr[frontIndex];
//
//        frontIndex = (frontIndex + 1) % capacity;
//        count--;
//
//        return ticket;
//    }
//
//    T front() {
//        if (isEmpty()) {
//            cout << "No pending tickets!" << endl;
//            return T();
//        }
//
//        return arr[frontIndex];
//    }
//
//    bool isEmpty() {
//        return count == 0;
//    }
//
//    bool isFull() {
//        return count == capacity;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "No pending tickets!" << endl;
//            return;
//        }
//
//        cout << "\nPending Support Tickets:" << endl;
//
//        for (int i = 0; i < count; i++) {
//            cout << arr[(frontIndex + i) % capacity] << endl;
//        }
//    }
//};
//
//int main() {
//    Queue<int> q(100);
//
//    int choice;
//    int ticket_id;
//
//    do {
//        cout << "\n===== CUSTOMER SUPPORT TICKET SYSTEM =====" << endl;
//        cout << "1. Add New Ticket" << endl;
//        cout << "2. Resolve Ticket" << endl;
//        cout << "3. Next Ticket" << endl;
//        cout << "4. Display Pending Tickets" << endl;
//        cout << "5. Check Empty" << endl;
//        cout << "0. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//
//        case 1:
//            cout << "Enter 4-digit Ticket ID: ";
//            cin >> ticket_id;
//            q.enqueue(ticket_id);
//            break;
//
//        case 2:
//            if (!q.isEmpty()) {
//                cout << "Ticket "
//                    << q.dequeue()
//                    << " resolved successfully!" << endl;
//            }
//            else {
//                cout << "No tickets to resolve!" << endl;
//            }
//            break;
//
//        case 3:
//            if (!q.isEmpty()) {
//                cout << "Next Ticket to Resolve: "
//                    << q.front() << endl;
//            }
//            else {
//                cout << "No pending tickets!" << endl;
//            }
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 5:
//            if (q.isEmpty())
//                cout << "Ticket Queue is Empty!" << endl;
//            else
//                cout << "Ticket Queue is Not Empty!" << endl;
//            break;
//
//        case 0:
//            cout << "Exiting Customer Support System..." << endl;
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
