import java.util.Scanner;

public class daal16 {
    static int leng(int n) {
        int lenght = 0;
        long temp = 1;
        while (temp <= n) {
            lenght++;
            temp *= 10;
        }
        return lenght;
    }

    public static void main(String args[]) {
        int n;
        int number3 = 0;
        Scanner input = new Scanner(System.in);
        System.out.println("give me a number");
        n = input.nextInt();
        int o_number = n;
        int double_number = n * n;
        int i = 0;
        int numbers[] = new int[leng(n)];
        while (n > 0) {
            numbers[i] = n % 10;
            n = n / 10;
            i++;

        }
        int double_numbers[] = new int[leng(double_number)];
        int do_number = double_number;
        i = 0;
        while (double_number > 0) {
            double_numbers[i] = double_number % 10;
            double_number = double_number / 10;
            i++;

        }

        for (int x = 0; x < double_numbers.length; x++) {
            if (double_numbers[x] == 3) {
                number3++;
            }
        }
        System.out.print(o_number + "'s reverse ");
        for (int x = 0; x < numbers.length; x++) {
            System.out.print(numbers[x]);
        }
        System.out.print("\n");
        if (number3 > 0) {
            System.out.println(o_number + "'s square is " + do_number + " and it has 3");
        } else {
            System.out.println(o_number + "'s square is " + do_number + " and it has not 3");
        }
        System.out.println(o_number + "'s first digit is " + numbers[0]);
        o_number = numbers[0];
        System.out.println("now number is " + o_number);
    }
}
