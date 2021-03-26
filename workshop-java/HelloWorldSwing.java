// Program ketigabelas 
// Elmo Allistair H - 1211822 - 2KA17

import javax.swing.*;

public class HelloWorldSwing { 
    public static void main(String[] args) { 
        JFrame frame = new JFrame("HelloWorldSwing"); 
        final JLabel label = new JLabel("Hello World");
        frame.getContentPane().add(label);
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame. pack();
        frame. setVisible(true);
    }
} 
