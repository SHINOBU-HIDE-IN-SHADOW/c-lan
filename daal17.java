import java.util.Scanner;

public class daal17 {
    public static void main(String args[]) {
        int n;
        int m;
        Scanner input = new Scanner(System.in);
        System.out.println("give me number n");
        n = input.nextInt();
        System.out.println("give me number m");
        m = input.nextInt();
        int last = n % 10 + m % 10;
        System.out.println("n is:" + n + " m is:" + m + " last digits sum: " + last);

    }
}