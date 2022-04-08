/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
//Number 15
package practiceJava;
import java.io.*;
import java.util.Scanner;

/**
 *
 * @author MD_Sh
 */
public class CopyCharacter {
    public static void main(String[] args) throws IOException {
        try {
            FileReader file = new FileReader("C:\\Users\\MD_Sh\\Documents\\NetBeansProjects\\ShahadatApplication\\src\\practiceJava\\character.txt");
            FileWriter file2 = new FileWriter("C:\\Users\\MD_Sh\\Documents\\NetBeansProjects\\ShahadatApplication\\src\\practiceJava\\characterOut.txt");
            int c;
            while((c=file.read())!=-1){
                System.out.print((char)c+"\t");
                file2.write((char)c+"\t");
            }
            System.out.println();
            file.close();
            file2.close();
        } catch (FileNotFoundException e) {}
    }
}
