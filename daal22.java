import java.util.Arrays;
import java.util.Random;

public class daal22 {
    public static void main(String args[]) {
        Random rd = new Random();
        int mass[] = new int[rd.nextInt(10) + 5];
        for (int x = 0; x < mass.length; x++) {
            mass[x] = rd.nextInt(20);
        }
        int max = mass[0];
        int min = mass[0];
        for (int x = 0; x < mass.length; x++) {
            if (mass[x] > max) {
                max = mass[x];
            }
            if (mass[x] < min) {
                min = mass[x];
            }

        }
        System.out.println("created massive" + Arrays.toString(mass));
        System.out.println("Massive's min value" + min);
        System.out.println("Massive's max value" + max);

    }
}