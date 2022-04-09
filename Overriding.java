/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

//Number 9
package practiceJava;

import java.util.Scanner;

/**
 *
 * @author MD_Sh
 */
class base{
    public void numberDisplay(int a,int b){
        System.out.println("Displayed In Base Class");
        System.out.println(a+" "+b);
    }
}
class derive extends base{
    @Override
    public void numberDisplay(int a,int  b){
        System.out.println("Displayed In Derive Class");
        System.out.println(b+" "+a);        
    }
}
public class Overriding {
    public static void main(String[] args) {
        base obj = new base();
        derive obj2 = new derive();
        Scanner scan = new Scanner(System.in);
        int a,b;
        System.out.println("Enter two integer Number: ");
        a = scan.nextInt();
        b = scan.nextInt();
        obj.numberDisplay(a, b);
        obj2.numberDisplay(a, b);
    }
}
