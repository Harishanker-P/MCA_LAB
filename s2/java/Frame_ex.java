
import java.awt.*;
import java.awt.event.*;

public class Frame_ex extends Frame implements ActionListener
{
   
   TextField T1,T2,T3,T4;
   Label Lb1,Lb2,Lb3,Lb4;
   Button b1;
   
   Frame_ex()
   {
   
   setLayout(new FlowLayout());
   
    T1 = new TextField(10);
    T2 = new TextField(10);
    T3 = new TextField(10);
    T4 = new TextField(10);
    
    Lb1 = new Label("First No:");
    Lb2 = new Label("Second No:");
    Lb3 = new Label("third  No:");
    Lb4 = new Label("Fourth No:");
    
    b1= new Button("Check");
    
    add(Lb1);
    add(T1);
    
    add(Lb2);
    add(T2);
    
    add(Lb3);
    add(T3);
    
    add(b1);
    add(Lb4);
    add(T4);
    
    T1.setText("");
    T2.setText("");
    T3.setText("");
    T4.setText("");
    
    b1.addActionListener(this);
    }
    
    public void actionPerformed(ActionEvent ae)
    {
    
      int a,b,c,result=0;
      String str;
      if (ae.getSource()==b1)
      {
       str=T1.getText();
       a= Integer.parseInt(str);
        str=T2.getText();
       b= Integer.parseInt(str);
        str=T3.getText();
       c= Integer.parseInt(str);
       System.out.println(a+" "+b+" "+c);
       if(a>=b)
       {
       	if(a>=c)
       	{
       		result=a;
       	}
       	else
       	{
       		result=c;
       	}
       }
       else
       {
       	if(b>=c)
       	{
       		result=b;
       	}
       	else
       	{
       		result=c;
       	}
       }
      }     
       T4.setText("No...= " + result);
       
}       
  
        
        public static void main(String a [])
        {
         Frame_ex obj = new Frame_ex();
         obj.setTitle("Compare");
         obj.setSize(200,300);
         obj.setVisible(true);
        }
        
       } 
            
        
        
        
       