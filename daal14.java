import java.util.Scanner;

public class daal14 {
    public static void main(String args[]) {
        int numbers;
        int digists_number = 0;
        int digists_sum = 0;
        int digists_first = 0;
        Scanner input = new Scanner(System.in);
        do {
            System.out.println("Give me a number that smaller than or equel to 100");
            numbers = input.nextInt();
        } while (numbers > 100);
        int o_number = numbers;
        while (numbers > 0) {
            digists_sum += numbers % 10;
            digists_number += 1;
            if (numbers < 10 || numbers > 0) {
                digists_first = numbers;
            }
            numbers = numbers / 10;
        }
        System.out.println(o_number + " is " + digists_number + " digits number");
        System.out.println("digits sum:" + digists_sum);
        System.out.println("first digit:" + digists_first);
        System.out.println("last digit:" + o_number % 10);
    }
}