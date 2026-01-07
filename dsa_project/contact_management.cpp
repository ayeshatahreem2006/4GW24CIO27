#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>

using namespace std;

// Contact structure
struct Contact {
    int id;
    string name;
    string phone;
    string email;
    string relation;
};

// Data Structures
stack<Contact> contactStack;   // Stack (LIFO)
queue<Contact> messageQueue;   // Queue (FIFO)
vector<Contact> contactList;   // Linear List

// Insert operation
void pushContact() {
    Contact c;

    cout << "Enter ID: ";
    cin >> c.id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, c.name);

    cout << "Enter Phone: ";
    getline(cin, c.phone);

    cout << "Enter Email: ";
    getline(cin, c.email);

    cout << "Enter Relation: ";
    getline(cin, c.relation);

    contactStack.push(c);
    messageQueue.push(c);
    contactList.push_back(c);

    cout << "Contact inserted successfully.\n";
}

// Stack Peek
void peekContact() {
    if (contactStack.empty()) {
        cout << "Stack is empty.\n";
        return;
    }
    Contact c = contactStack.top();
    cout << "ID: " << c.id << "\nName: " << c.name
         << "\nPhone: " << c.phone << "\nEmail: " << c.email
         << "\nRelation: " << c.relation << "\n";
}

// Stack Pop
void popContact() {
    if (contactStack.empty()) {
        cout << "Nothing to pop.\n";
        return;
    }
    Contact c = contactStack.top();
    contactStack.pop();
    cout << "Removed: " << c.name << "\n";
}

// Queue Dequeue
void dequeueMessage() {
    if (messageQueue.empty()) {
        for (size_t i = 0; i < contactList.size(); i++)
            messageQueue.push(contactList[i]);
    }
    if (messageQueue.empty()) {
        cout << "Queue empty.\n";
        return;
    }
    Contact c = messageQueue.front();
    messageQueue.pop();

    cout << "Message sent to:\n";
    cout << "ID: " << c.id << "\nName: " << c.name
         << "\nPhone: " << c.phone << "\nEmail: " << c.email
         << "\nRelation: " << c.relation << "\n";
}

// Linear Search
void searchById() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (size_t i = 0; i < contactList.size(); i++) {
        if (contactList[i].id == id) {
            cout << "Contact Found:\n";
            cout << "ID: " << contactList[i].id
                 << "\nName: " << contactList[i].name
                 << "\nPhone: " << contactList[i].phone
                 << "\nEmail: " << contactList[i].email
                 << "\nRelation: " << contactList[i].relation << "\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

// Main Menu
int main() {
    int choice;

    do {
        cout << "\n--- DSA Contact Management ---\n";
        cout << "1. Push Contact (Stack)\n";
        cout << "2. Peek Contact (Stack)\n";
        cout << "3. Pop Contact (Stack)\n";
        cout << "4. Dequeue Message (Queue)\n";
        cout << "5. Search Contact (Linear Search)\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: pushContact(); break;
            case 2: peekContact(); break;
            case 3: popContact(); break;
            case 4: dequeueMessage(); break;
            case 5: searchById(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
