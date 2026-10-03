import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc= new Scanner(System.in);

        double a=sc.nextDouble();
        double b=30.48*a;

        System.out.printf("%.1f", a*30.48);
    }
}