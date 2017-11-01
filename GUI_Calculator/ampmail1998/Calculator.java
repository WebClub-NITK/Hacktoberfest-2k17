Java-Calculator: A calculator built using java swing
 + 					-by Amit P
 +					Pune, India.
 +*/
 +import java.awt.*;
 +import java.awt.event.*;
 +import javax.swing.*;
 +
 +public class Calculator{
 +    JFrame jf;
 +    JTextField output, oa, op;
 +    JButton n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, point, equal, add, sub, pro, div, clear, neg, per;
 +    int zero = 0;
 +
 +    Calculator(){
 +        jf= new JFrame("CALCULATOR");
 +        jf.setSize(500, 500);
 +        
 +        output = new JTextField();
 +        output.setHorizontalAlignment(output.RIGHT);
 +        output.setText("" + zero);
 +        op = new JTextField();
 +        op.setHorizontalAlignment(output.RIGHT);
 +        op.setEditable(false);
 +        oa = new JTextField();
 +        oa.setHorizontalAlignment(output.RIGHT);
 +        oa.setEditable(false);
 +
 +        n0 = new JButton("0");
 +        n1 = new JButton("1");
 +        n2 = new JButton("2");
 +        n3 = new JButton("3");
 +        n4 = new JButton("4");
 +        n5 = new JButton("5");
 +        n6 = new JButton("6");
 +        n7 = new JButton("7");
 +        n8 = new JButton("8");
 +        n9 = new JButton("9");
 +        point = new JButton(".");
 +        equal = new JButton("=");
 +        add = new JButton("+");
 +        sub = new JButton("-");
 +        pro = new JButton("X");
 +        div = new JButton("/");
 +        clear = new JButton("Clear");
 +        neg = new JButton("+-");
 +        per = new JButton("%");
 +
 +        output.setBounds(40, 60, 206, 30);
 +        op.setBounds(140, 38, 85, 20);
 +        oa.setBounds(225, 38, 20, 20);
 +
 +        clear.setBounds(40, 100, 102, 40);
 +        neg.setBounds(144, 100, 50, 40);
 +        per.setBounds(196, 100, 50, 40);
 +
 +        n7.setBounds(40, 142, 50, 40);
 +        n8.setBounds(92, 142, 50, 40);
 +        n9.setBounds(144, 142, 50, 40);
 +        div.setBounds(196, 142, 50, 40);
 +
 +        n4.setBounds(40, 184, 50, 40);
 +        n5.setBounds(92, 184, 50, 40);
 +        n6.setBounds(144, 184, 50, 40);
 +        pro.setBounds(196, 184, 50, 40);
 +
 +        n1.setBounds(40, 226, 50, 40);
 +        n2.setBounds(92, 226, 50, 40);
 +        n3.setBounds(144, 226, 50, 40);
 +        sub.setBounds(196, 226, 50, 40);
 +
 +
 +        n0.setBounds(40, 268, 50, 40);
 +        point.setBounds(92, 268, 50, 40);
 +        equal.setBounds(144, 268, 50, 40);
 +        add.setBounds(196, 268, 50, 40);
 +
 +        jf.add(output);
 +        jf.add(op);
 +        jf.add(oa);
 +        jf.add(n7);
 +        jf.add(n8);
 +        jf.add(n9);
 +        jf.add(div);
 +        jf.add(n4);
 +        jf.add(n5);
 +        jf.add(n6);
 +        jf.add(pro);
 +        jf.add(n1);
 +        jf.add(n2);
 +        jf.add(n3);
 +        jf.add(sub);
 +        jf.add(point);
 +        jf.add(n0);
 +        jf.add(equal);
 +        jf.add(add);
 +        jf.add(neg);
 +        jf.add(clear);
 +        jf.add(per);
 +
 +        jf.setLayout(null);
 +        jf.setVisible(true);
 +        jf.setSize(300, 400);
 +        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 +
 +
 +        n0.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 0;
 +            String a = output.getText();
 +            output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +         n1.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 1;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n2.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 2;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n3.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 3;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n4.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 4;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n5.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 5;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n6.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 6;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n7.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 7;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n8.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 8;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        n9.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            int n = 9;
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText("" + a + n);
 +            }
 +        });
 +        point.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            String a = output.getText();
 +             output.setText("");
 +            output.setText(a + ".");
 +            }
 +        });
 +        
 +        equal.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(op.getText());
 +            float b = Float.parseFloat(output.getText());
 +            int c = opr();
 +            float d = 0;
 +            switch(c){
 +                case 1:
 +                    d = a + b;
 +                        break;
 +                case 2:
 +                    d = a - b;
 +                        break;
 +                case 3:
 +                    d = a * b;
 +                        break;
 +                case 4:
 +                    d = a / b;
 +                        break;
 +                case 5:
 +                    d = a % b;
 +                        break;
 +            }
 +             output.setText("" + d);
 +             op.setText("");
 +             oa.setText("");
 +
 +            }
 +        });
 +        clear.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +             output.setText("");
 +            }
 +        });
 +        add.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            op.setText("" + a);
 +            oa.setText("+");
 +            output.setText("");
 +             
 +            }
 +        });
 +        sub.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            op.setText("" + a);
 +            oa.setText("-");
 +            output.setText("");
 +
 +            }
 +        });
 +        pro.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            op.setText("" + a);
 +            oa.setText("X");
 +            output.setText("");
 +
 +            }
 +        });
 +        div.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            op.setText("" + a);
 +            oa.setText("/");
 +            output.setText("");
 +
 +            }
 +        });
 +        per.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            op.setText("" + a);
 +            oa.setText("%");
 +            output.setText("");
 +
 +            }
 +        });
 +        neg.addActionListener(new ActionListener(){
 +            public void actionPerformed(ActionEvent e) {
 +            float a = Float.parseFloat(output.getText());
 +            output.setText("" + ((-1) * a));
 +
 +            }
 +        });
 +
 +    }
 +
 +    public int opr(){
 +        String a = oa.getText();
 +        if(a.equals("+"))
 +            return 1;
 +        else if(a.equals("-"))
 +            return 2;
 +        else if(a.equals("X"))
 +            return 3;
 +        else if(a.equals("/"))
 +            return 4;
 +        else if(a.equals("%"))
 +            return 5;
 +        else return 0;
 +    }
 +
 +	public static void main(String args[]) {
 +		SwingUtilities.invokeLater(new Runnable() {
 +			public void run() {
 +				new Calculator();
 +			}
 +		});
 +	}
 +}
