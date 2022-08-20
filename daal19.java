import java.util.Scanner;

public class daal19 {
    public static void main(String args[]) {
        int n;
        int m;
        int lcm;
        Scanner input = new Scanner(System.in);
        System.out.println("give me number n");
        n = input.nextInt();
        System.out.println("give me number m");
        m = input.nextInt();
        lcm = (n > m) ? n : m;
        while (lcm % n != 0 || lcm % m != 0) {
            lcm++;
        }
        System.out.println("n is:" + n + " m is:" + m + " are LCD is : " + lcm);

    }
}