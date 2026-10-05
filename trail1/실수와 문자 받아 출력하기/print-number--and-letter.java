import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        char s=sc.next().charAt(0);
        double a=sc.nextDouble();
        double b=sc.nextDouble();

        System.out.println(s);
        System.out.printf("%.2f\n%.2f", a,b);
    }
}