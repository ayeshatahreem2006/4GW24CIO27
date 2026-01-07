# 📇 DSA Contact Management System (Java)

A simple **console-based Contact Management System** implemented in **Java**, designed to demonstrate the use of core **Data Structures and Algorithms (DSA)** such as **Stack**, **Queue**, **ArrayList**, and **Linear Search**.

---

## 🚀 Features

-  **Add Contacts** using Stack (LIFO)
-  **View Latest Contact** using Stack Peek
- **Remove Contact** using Stack Pop
-  **Send Messages** using Queue (FIFO)
-  **Search Contacts** using Linear Search
-  **Store Contacts** in an ArrayList

---

## 🧠 Data Structures Used

| Data Structure | Purpose |
|----------------|--------|
| `Stack<Contact>` | Stores contacts in Last-In-First-Out order |
| `Queue<Contact>` | Simulates message sending in First-In-First-Out order |
| `ArrayList<Contact>` | Maintains all contacts for searching |
| `Linear Search` | Searches contacts by ID |

---

## 🏗️ Class Structure

### `Contact` Class
Stores contact information:
- `id`
- `name`
- `phone`
- `email`
- `relation`

### `DSAContactManagement` Class
Contains:
- Menu-driven user interface
- Stack, Queue, and ArrayList operations
- Search and display functions

---

##  Menu Options

```text
1. Push Contact (Stack)
2. Peek Contact (Stack)
3. Pop Contact (Stack)
4. Dequeue Message (Queue)
5. Search Contact (Linear Search)
0. Exit
---

🧪 ### Example Operations

Insert a contact → stored in Stack, Queue, and List

Peek → shows most recently added contact

Pop → removes latest contact from Stack

Dequeue → sends message to oldest contact

Search → finds contact by ID

🎯 Learning Outcomes

Practical implementation of Stack, Queue, and ArrayList

Understanding LIFO and FIFO

Applying Linear Search

Building menu-driven Java programs
