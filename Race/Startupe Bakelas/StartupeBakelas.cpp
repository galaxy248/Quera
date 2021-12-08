import java.util.Scanner;

public class Main {
    public static void main (String[] args){

        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[4];
        int[] arr2 = new int[4];
        int j = 0;

        for(int i = 0 ; i < 4 ; i++){
            arr[i] = scanner.nextInt();
        }

        for(int i = 0 ; i < 4 ; i++){
            arr2[i] = 0;
        }

        while((arr[0] != 0) && (arr[2] != 0)) {
            arr2[j]++;
            j++;
            if (j == 4) {
                j = 0;
            }
            if ((j - 1) % 2 == 0) {
                arr[0]--;
            } else {
                arr[2]--;
            }
        }
            System.out.print(arr2[0] + " " +arr2[1] + " " +arr2[2] + " " +arr2[3] );


    }
}