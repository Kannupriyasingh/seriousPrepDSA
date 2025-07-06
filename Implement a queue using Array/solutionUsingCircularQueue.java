class CircularQueue {
    private int[] arr;
    private int size;
    private int front, rear;

    // Constructor
    CircularQueue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueue / push
    void push(int x) {
        if ((rear + 1) % size == front) {
            System.out.println("Queue Overflow");
            return;
        }

        if (front == -1) {
            // First element
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

    // Dequeue / pop
    int pop() {
        if (front == -1) {
            System.out.println("Queue Underflow");
            return -1;
        }

        int poppedVal = arr[front];

        if (front == rear) {
            // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return poppedVal;
    }

    // Optional: peek front element
    int peek() {
        if (front == -1) {
            System.out.println("Queue is empty");
            return -1;
        }
        return arr[front];
    }

    // Optional: check if empty
    boolean isEmpty() {
        return front == -1;
    }

    // Optional: check if full
    boolean isFull() {
        return (rear + 1) % size == front;
    }
}

public class Main {
    public static void main(String[] args) {
        CircularQueue q = new CircularQueue(5); // capacity 5

        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);

        System.out.println("Popped: " + q.pop());  // 10
        System.out.println("Popped: " + q.pop());  // 20

        q.push(50);
        q.push(60);
        q.push(70); // Should show overflow

        while (!q.isEmpty()) {
            System.out.println("Popped: " + q.pop());
        }

        System.out.println("Popped: " + q.pop()); // Underflow
    }
}

