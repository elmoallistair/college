// Program keempatbelas 
// Elmo Allistair H - 1211822 - 2KA17

import javax.swing.*;
import java.awt.*;

public class Containers {
    public static void main(String[] args) { 
        JFrame frame = new JFrame("Container");
        JPanel p1 = new JPanel();
        p1.setBackground(new Color(200, 200, 200)); // Panel1 is darker
        p1.add(new JButton("#1")); // Button 1 is contained in p1
        
        JPanel p2 = new JPanel( );
        p2.setBackground(new Color(150, 150, 150)); // p2 is darker than p2
        p1.add(p2);                 //i p2 is contained in p1
        p2.add(new JButton("#2"));  // Button 2 is contained in p2

        JPanel p3 = new JPanel( );
        p3.setBackground(new Color(100, 100, 100)); // p3 is darker than p2
        p2.add(p3);                 // p3 is contained in p2
        p3.add(new JButton("#3"));  // Button 3 is contained in p3
        
        JPanel p4 = new JPanel( ); 
        p4.setBackground(new Color(150, 150, 150)); // p4 is darker than p1
        p1.add(p4);                 // p4 is contained in p1
        p4.add(new JButton("#4"));  // Button4 is contained in p4
        p4.add(new JButton("#5"));  // ButtonS is also contained in p4
        
        frame.getContentPane().add(p1); //Panell is contained in frame
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}
