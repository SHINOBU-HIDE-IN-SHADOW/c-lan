import java.util.Arrays;
import java.util.Random;

public class daal20 {
    public static void main(String args[]) {
        Random rd = new Random();
        int mass[] = new int[rd.nextInt(6) + 5];
        int upper_mass[] = new int[mass.length];
        int upper_lower[] = new int[mass.length];
        for (int x = 0; x < mass.length; x++) {
            mass[x] = rd.nextInt(20);
        }
        System.arraycopy(mass, 0, upper_mass, 0, upper_mass.length);
        System.arraycopy(mass, 0, upper_lower, 0, upper_lower.length);
        System.out.println("created massive" + Arrays.toString(mass));
        for (int x = 0; x < upper_mass.length; x++) {
            for (int y = x + 1; y < upper_mass.length; y++) {
                int tmp = 0;
                if (upper_mass[x] > upper_mass[y]) {
                    tmp = upper_mass[x];
                    upper_mass[x] = upper_mass[y];
                    upper_mass[y] = tmp;

                }
            }
        }
        for (int x = 0; x < upper_lower.length; x++) {
            for (int y = x + 1; y < upper_lower.length; y++) {
                int tmp = 0;
                if (upper_lower[x] < upper_lower[y]) {
                    tmp = upper_lower[x];
                    upper_lower[x] = upper_lower[y];
                    upper_lower[y] = tmp;

                }
            }
        }
        System.out.println("massive's ascend: " + Arrays.toString(upper_mass));
        System.out.println("massive's descend: " + Arrays.toString(upper_lower));
    }
}