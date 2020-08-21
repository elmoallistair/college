// Program kelimabelas 
// Elmo Allistair H - 1211822 - 2KA17

import java.awt.*;
import javax.swing.*;

public class FlowLayoutPane {
    public static void main(String[] args) {
        JFrame frame = new JFrame("FlowLayoutPane");
        JPanel panel = new JPanel();
        panel.setLayout(new FlowLayout(FlowLayout.LEFT, 10, 10));
        panel. setPreferredSize(new Dimension(450, 150));
        frame.getContentPane().add(panel);
    
        // Add some buttons to demonstrate the layout. 
        String spaces = ""; // Used to make the buttons different 
        for(int i = 1; i <= 9; i++) { 
            panel.add(new JButton("Button #" + i + spaces)); 
            spaces += " "; 
        }

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        frame.pack(); 
        frame.setVisible(true);
    }
} 
