import java.applet.Applet;
import java.awt.Graphics;
public class ex15 extends Applet{
    String subject[] ={"JAVA","ENGLISH","CNS","CA","DS"};
    int mark[] = {100,99,90,80,70};
    @Override
    public void paint(Graphics g){
        for(int i=0;i<5;++i){
            g.drawString(subject[i], 150, i*50+30);
            g.fillRect(50,i*50+10,mark[0],5);
        }
    }
}