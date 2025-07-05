public class Main {
    public static void main(String[] args) {
        ArrayList<integer>s = new ArrayList<>();
        
        // push elements
        s.add(1);
        s.add(2);
        s.add(3);
        
        //pop elements
        System.out.println(s.get(s.size()-1) + " popped from stack");
        s.remove(s.size()-1);
        
        // peek element
        System.out.println(s.get(s.size()-1) + "is the top element");
        
        //Print all the elements
        System.out.println("Elements of the stack: ");
        
        while(!s.isEmpty()) {
            System.out.println(s.get(s.size()-1) + " ");
            s.removve(s.size()-1);
        }

    }
}
