// GeeksForGeeks

class MyStack {
    private int[] arr;
    private int top;

    public MyStack() {
        arr = new int[1000];
        top = -1;
    }

    public void push(int x) {
        arr[++top] = x;
    }

    public int pop() {
       if(top < 0) {
        //   System.out.println("Stack is underflow");
           return -1;
       }
       return arr[top--];
    }
}
