public class MyStack {
    private class StackNode {
        int data;
        StackNode next;

        StackNode(int a) {
            data = a;
            next = null;
        }
    }

    private StackNode top;

    public MyStack() {
        top = null;
    }

    // Function to push an integer into the stack.
    public void push(int a) {
        StackNode newNode = new StackNode(a);
        newNode.next = top;
        top = newNode;
    }

    // Function to remove an item from top of the stack.
    public int pop() {
        if (top == null) {
            System.out.println("Stack underflow");
            return -1;
        }
        int poppedVal = top.data;
        top = top.next;  // garbage collector will clean up old top
        return poppedVal;
    }

    // Optional: peek function
    public int peek() {
        if (top == null) {
            System.out.println("Stack is empty");
            return -1;
        }
        return top.data;
    }

    // Optional: check if stack is empty
    public boolean isEmpty() {
        return top == null;
    }
}
