import java.util.Scanner;
import java.lang.Math;

public class daal12 {
    public static void main(String args[]) {
        int x;
        int y;
        int z;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter x");
        x = input.nextInt();
        System.out.println("Enter y");
        y = input.nextInt();
        System.out.println("Enter z");
        z = input.nextInt();
        if (x + y > z && x + z > y && y + z > x) {
            System.out.println("x: " + x + " y: " + y + " z: " + z + " can make a triangle");
            double ange1;
            ange1 = Math.acos((Math.pow(x, 2) + Math.pow(y, 2) - Math.pow(z, 2)) / (2 * x * y));
            double ange2;
            ange2 = Math.acos((Math.pow(x, 2) + Math.pow(z, 2) - Math.pow(y, 2)) / (2 * x * z));
            double ange3;
            ange3 = Math.acos((Math.pow(z, 2) + Math.pow(y, 2) - Math.pow(x, 2)) / (2 * z * y));
            System.out.println(Math.toDegrees(ange1));
            System.out.println(Math.toDegrees(ange2));
            System.out.println(Math.toDegrees(ange3));
            if (Math.toDegrees(ange1) < 90 && Math.toDegrees(ange2) < 90 && Math.toDegrees(ange3) < 90) {
                System.out.println("this triangel is acute triangle");
            } else {
                System.out.println("It isn't a acute triangle");
            }

        } else {
            System.out.println("It cant make a triangle");
        }
    }
}