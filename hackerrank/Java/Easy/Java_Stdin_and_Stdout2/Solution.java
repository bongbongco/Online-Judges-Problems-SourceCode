package Java.Easy.Java_Stdin_and_Stdout2;

import java.util.Scanner;

public class Solution {

 

    public static void main(String[] args) {

            Scanner sc=new Scanner(System.in);

            int x=sc.nextInt();

            double y=sc.nextDouble();

            sc.nextLine();

//nextInt나 nextDouble의 경우 개행문자 전 까지 읽어오므로 sc.nextLine() 삽입

            String s=sc.nextLine();

        

            System.out.println("String: "+s);

            System.out.println("Double: "+y);

            System.out.println("Int: "+x);

    }

}