class A{
    int x,y;
    
    A(){
        
    }
    public int sum(int x,int y){
        return x*y;
    }
}
class B extends A{
    int c=2;
    B(int a,int b){
        x=a;
        y=b;
    }
    B(){
        
    }
    void display()
    {
        System.out.println(sum(x,y)*c);
    }
}
public class PracticeJava {
    public static void main(String[] args) {
        B test=new B();
        test.display();
    }  
}
