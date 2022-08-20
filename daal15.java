import java.util.Scanner;

public class daal15 {
    public static void main(String args[]) {
        int number;
        int lenght = 0;
        long temp = 1;
        int same = 0;
        boolean palindrome = false;
        Scanner input = new Scanner(System.in);
        do {
            System.out.println("give me a number smaller than 9999");
            number = input.nextInt();
        } while (number > 10000);
        int o_number = number;
        while (temp <= number) {
            lenght++;
            temp *= 10;
        }
        int i = 0;
        int numbers[] = new int[lenght];
        while (number > 0) {
            numbers[i] = number % 10;
            number = number / 10;
            i++;

        }
        int last = numbers.length - 1;
        for (int x = 0; x < numbers.length; x++) {
            if (numbers[last] != numbers[x]) {
                break;
            }
            if (last == x) {
                palindrome = true;
            }
            last--;
        }
        for (int x = 0; x < numbers.length; x++) {
            for (int y = x + 1; y < numbers.length; y++) {
                if (numbers[x] == numbers[y]) {
                    same += 1;
                }
            }
        }
        if (palindrome == true) {
            System.out.println(o_number + " is palindrome");
        } else {
            System.out.println(o_number + " is not palindrome");
        }
        if (same >= 3) {
            System.out.println(o_number + " have same 3 digits");
        } else if (same == 0) {
            System.out.println(o_number + "'s all digits are diffrent");
        }

    }
}