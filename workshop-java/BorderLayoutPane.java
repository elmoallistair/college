import java.awt.*;
import javax.swing.*;

public class BorderLayoutPane{

    public static void main(String[] args){
        JFrame frame = new JFrame("BorderLayoutPane");
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout(10,10));
        panel.setPreferredSize(new Dimension(450,150));
        frame.getContentPane().add(panel);

        panel.add(new JButton("North"),BorderLayout.NORTH);
        panel.add(new JButton("South"),BorderLayout.SOUTH);
        panel.add(new JButton("West"),BorderLayout.WEST);
        panel.add(new JButton("East"),BorderLayout.EAST);
        panel.add(new JButton("Center"),BorderLayout.CENTER);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}