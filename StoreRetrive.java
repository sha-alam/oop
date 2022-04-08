package practiceJava;

import java.io.*;
import java.util.Scanner;
public class StoreRetrive {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        try {
            try (FileWriter myFile = new FileWriter("C:\\Users\\Sha Alam\\OneDrive\\Desktop\\First Time Try\\storeRetrive.txt")) {
                System.out.println("Number of Integer you want to write: ");
                int n = scan.nextInt(),k;
                for(int i=0;i<n;i++){
                    k = scan.nextInt();
                    myFile.write(Integer.toString(k)+"\t");
                }
            }
            Scanner scanner;
            scanner = new Scanner(new File("C:\\Users\\Sha Alam\\OneDrive\\Desktop\\First Time Try\\storeRetrive.txt"));
            while(scanner.hasNextInt()){
                System.out.print(scanner.nextInt()+"\t");
            }
            System.out.println();
        } catch (FileNotFoundException e) {}
    }
}
