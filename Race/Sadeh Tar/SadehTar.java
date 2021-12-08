import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[4];
        double avg = 0;
        int sum = 0, product = 1;
        int a = scanner.nextInt();
        arr[0] = a;
        sum += a;
        product *= a;
        int max = a, min = a;
        for (int i = 1; i < 4; i++) {
            int b = scanner.nextInt();
            if (max < b) {
                max = b;
            }
            if (min > b) {
                min = b;
            }
            sum += b;
            product *= b;
        }
        avg = (double) sum / 4;
        System.out.format("Sum : %d.000000\nAverage : %f\nProduct : %d.000000\nMAX : %d.000000\nMIN : %d.000000", sum, avg, product, max, min);

    }
}