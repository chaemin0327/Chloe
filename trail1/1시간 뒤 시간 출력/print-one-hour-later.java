import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String clock = sc.next();
        String[] hm = clock.split(":");
        int h = Integer.parseInt(hm[0]);
        System.out.println((h + 1) + ":" + hm[1]);
    }
}