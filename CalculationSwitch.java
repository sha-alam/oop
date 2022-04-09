/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

//Number 10
package practiceJava;

import java.util.Scanner;

/**
 *
 * @author MD_Sh
 */
public class CalculationSwitch {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b;
        char op;
        System.out.print("Enter two Integers: ");
        a = scan.nextInt();
        b = scan.nextInt();
        System.out.print("Enter an Operator(+,-,*,'/'): ");
        op = scan.next().charAt(0);
        
        switch (op) {
            case '+':
                System.out.println("Additon: "+(a+b));
                break;            
            case '-':
                System.out.println("Subtration: "+(a-b));
                break;            
            case '*':
                System.out.println("Multiplication: "+(a*b));
                break;            
            case '/':
                System.out.println("Divison: "+(a/(float)b));
                break;
            default:
                System.out.println("ERROR: Unsupported Operation");
        }
    }
}
