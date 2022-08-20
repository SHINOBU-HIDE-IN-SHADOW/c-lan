import java.util.Scanner;

public class daal18 {
    public static void main(String args[]) {
        int n;
        int m;
        int max;
        int min;
        int remain;
        Scanner input = new Scanner(System.in);
        System.out.println("give me number n");
        n = input.nextInt();
        System.out.println("give me number m");
        m = input.nextInt();
        max = (n > m) ? n : m;
        min = (n < m) ? n : m;
        if (max != 0) {
            while (min > 0) {
                remain = max % min;
                max = min;
                min = remain;
            }
        }
        System.out.println("n is:" + n + " m is:" + m + " are GCD is : " + max);

    }
}