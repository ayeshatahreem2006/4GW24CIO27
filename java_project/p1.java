import java.util.*;

public class DSAContactManagement {

    // Contact structure
    static class Contact {
        int id;
        String name;
        String phone;
        String email;
        String relation;

        Contact(int id, String name, String phone, String email, String relation) {
            this.id = id;
            this.name = name;
            this.phone = phone;
            this.email = email;
            this.relation = relation;
        }
    }

    // Data Structures
    static Stack<Contact> contactStack = new Stack<>();        // Stack (LIFO)
    static Queue<Contact> messageQueue = new LinkedList<>();   // Queue (FIFO)
    static ArrayList<Contact> contactList = new ArrayList<>(); // Linear list

    static Scanner sc = new Scanner(System.in);

    // Insert operation
    static void pushContact() {
        System.out.print("Enter ID: ");
        int id = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Phone: ");
        String phone = sc.nextLine();

        System.out.print("Enter Email: ");
        String email = sc.nextLine();

        System.out.print("Enter Relation: ");
        String relation = sc.nextLine();

        Contact c = new Contact(id, name, phone, email, relation);

        contactStack.push(c);
        messageQueue.add(c);
        contactList.add(c);

        System.out.println("Contact inserted successfully.");
    }

    // Stack Peek
    static void peekContact() {
        if (contactStack.isEmpty()) {
            System.out.println("Stack is empty.");
            return;
        }
        display(contactStack.peek());
    }

    // Stack Pop
    static void popContact() {
        if (contactStack.isEmpty()) {
            System.out.println("Nothing to pop.");
            return;
        }
        Contact c = contactStack.pop();
        System.out.println("Removed: " + c.name);
    }

    // Queue Dequeue
    static void dequeueMessage() {
        if (messageQueue.isEmpty()) {
            messageQueue.addAll(contactList);
        }
        if (messageQueue.isEmpty()) {
            System.out.println("Queue empty.");
            return;
        }
        Contact c = messageQueue.poll();
        System.out.println("Message sent to:");
        display(c);
    }

    // Linear Search
    static void searchById() {
        System.out.print("Enter ID to search: ");
        int id = sc.nextInt();

        for (Contact c : contactList) {
            if (c.id == id) {
                display(c);
                return;
            }
        }
        System.out.println("Contact not found.");
    }

    // Display
    static void display(Contact c) {
        System.out.println("ID: " + c.id);
        System.out.println("Name: " + c.name);
        System.out.println("Phone: " + c.phone);
        System.out.println("Email: " + c.email);
        System.out.println("Relation: " + c.relation);
    }

    // Main Menu
    public static void main(String[] args) {
        int choice;
        do {
            System.out.println("\n--- DSA Contact Management ---");
            System.out.println("1. Push Contact (Stack)");
            System.out.println("2. Peek Contact (Stack)");
            System.out.println("3. Pop Contact (Stack)");
            System.out.println("4. Dequeue Message (Queue)");
            System.out.println("5. Search Contact (Linear Search)");
            System.out.println("0. Exit");
            System.out.print("Enter choice: ");

            choice = sc.nextInt();

            switch (choice) {
                case 1 -> pushContact();
                case 2 -> peekContact();
                case 3 -> popContact();
                case 4 -> dequeueMessage();
                case 5 -> searchById();
                case 0 -> System.out.println("Exiting...");
                default -> System.out.println("Invalid choice.");
            }
        } while (choice != 0);
    }
}
