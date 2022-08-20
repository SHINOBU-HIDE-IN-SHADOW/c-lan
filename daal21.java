import java.util.Arrays;
import java.util.Random;

public class daal21 {
    public static void main(String args[]) {
        int sum = 0;
        Random rd = new Random();
        int mass[] = new int[rd.nextInt(6) + 1];
        for (int x = 0; x < mass.length; x++) {
            mass[x] = rd.nextInt(20);
        }
        for (int x = 0; x < mass.length; x++) {
            sum += mass[x];
        }

        System.out.println("created massive" + Arrays.toString(mass));
        System.out.println("Massive's sum is: " + sum);

    }
}