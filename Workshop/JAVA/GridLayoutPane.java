import java.awt.*;
import javax.swing.*;

public class GridLayoutPane {

    public static void main(String[] args) {
        JFrame frame = new JFrame("GridLayoutPane");
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(0,3,10,10));
        panel.setPreferredSize(new Dimension(450,150));
        frame.getContentPane().add(panel);

        for(int i = 1; i <= 12; i++)
            panel.add(new JButton("Button #"+ i));
        

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}
