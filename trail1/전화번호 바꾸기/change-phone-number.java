import java.util.Scanner;

public class Main {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next(); //문자열 하나를 입력받아 s에 저장
        String[] strArr = s.split("-"); //문자열을 -을 기준으로 잘라서 저장해라
        System.out.println("010-"+strArr[2] + "-" + strArr[1]);
    }
}