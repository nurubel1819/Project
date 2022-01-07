package multiplication_table;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class Multiplication_table extends JFrame {

    public Container c;
    public JLabel namta_image, namta_name, my_name;
    public JTextField namta_number;
    public JButton clear;
    public JTextArea output;
    public JScrollPane scroll;
    public ImageIcon img;
    public Font f;

    Multiplication_table() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(100, 50, 300, 700);
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.CYAN);

        initcomponent();
    }

    public void initcomponent() {
        img = new ImageIcon(getClass().getResource("images.png"));
        namta_image = new JLabel(img);
        namta_image.setBounds(0, 0, img.getIconWidth(), img.getIconHeight());
        c.add(namta_image);
        //System.out.println(img.getIconWidth()+" "+img.getIconHeight()); // it use for find out imags weidth and height

        f = new Font("Arial", Font.BOLD, 20);

        namta_name = new JLabel("Enter number :");
        namta_name.setBounds(10, 180, 150, 50);
        namta_name.setFont(f);
        namta_name.setForeground(Color.MAGENTA);
        c.add(namta_name);

        namta_number = new JTextField();
        namta_number.setBounds(170, 180, 100, 50);
        namta_number.setBackground(Color.MAGENTA);
        namta_number.setFont(f);
        namta_number.setHorizontalAlignment(JTextField.CENTER);
        c.add(namta_number);

        clear = new JButton("Clear");
        clear.setBounds(170, 240, 100, 40);
        clear.setFont(f);
        clear.setBackground(Color.RED);
        clear.setForeground(Color.WHITE);
        c.add(clear);

        output = new JTextArea();
        output.setBackground(Color.lightGray);
        output.setForeground(Color.BLUE);
        output.setFont(f);
        scroll = new JScrollPane(output);
        scroll.setBounds(0, 300, 280, 300);
        c.add(scroll);

        my_name = new JLabel("MD Nasir Uddin Rubel");
        my_name.setBounds(30, 605, 300, 50);
        my_name.setFont(f);
        my_name.setForeground(Color.WHITE);
        c.add(my_name);

        clear.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                namta_number.setText("");
                output.setText("");
                c.add(scroll);

            }

        });

        namta_number.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                if (namta_number.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Input field is empty");
                } else {
                    int number = Integer.parseInt(namta_number.getText());
                    namta_number.setText("");
                    output.setText("");// it's for textArea
                    for (int i = 0; i < 11; i++) {
                        int result = number * i;
                        output.append(String.valueOf(number) + " " + "x " + String.valueOf(i) + " = " + String.valueOf(result) + "\n");
                    }

                }
                output.setForeground(Color.MAGENTA);
                //scroll.add(output, JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED, JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
                c.add(scroll);
            }

        });
    }

    public static void main(String[] args) {

        Multiplication_table frame = new Multiplication_table();
        frame.setVisible(true);
    }

}
