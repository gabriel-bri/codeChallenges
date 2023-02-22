import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) {
        String s =  new String("()()");;
        Stack<Character> stack = new Stack<>();
        
        for(int i = 0; i < s.length(); i++) {
            char letra = s.charAt(i);
            
            if(letra == '(') {
                stack.push(letra);
            }
            
            else {
                if(stack.size() > 0 && stack.peek() == '(') {
                    stack.pop();
                }
                
                else {
                    stack.push(letra);
                }
            }
        }
        
        System.out.println(stack.size());
    }
}
