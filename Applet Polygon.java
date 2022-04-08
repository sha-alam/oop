import java.applet.Applet;
import java.awt.*;
public class polygon extends Applet {
    int x [] = {200,300,400,500};
    int y[] = {400,500,600,320};
    @Override
    public void paint(Graphics g) {
        g.fillPolygon(x, y, 4);
    }
    }