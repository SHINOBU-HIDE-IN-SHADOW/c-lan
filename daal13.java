import java.util.Scanner;

public class daal13 {
    public static void main(String args[]) {
        int age;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your age");
        age = input.nextInt();
        if (age < 5) {
            System.out.println("you are infant");
        } else if (age < 20) {
            System.out.println("you a junior");
        } else if (age < 40) {
            System.out.println("you are younger");
        } else if (age < 110) {
            System.out.println("you are older");
        } else {
            System.out.println("you are most older man in the world!");
        }

    }
}