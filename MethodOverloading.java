/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


//Number 8
package practiceJava;

/**
 *
 * @author MD_Sh
 */

class areaAndVolume{
//    area
    public void calculation(int l,int w){
        System.out.println("Area: "+ l*w);
    }
//    volume
    public void calculation(int l,int w,int h){
        System.out.println("Volume: "+l*w*h);
    }
}
public class MethodOverloading {
    public static void main(String[] args) {
        areaAndVolume obj = new areaAndVolume();
        obj.calculation(50, 7);
        obj.calculation(50,7,15);
    }
}
