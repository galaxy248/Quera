import java.util.Scanner;

public class Main {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        int saat = scanner.nextInt();
        int daghighe = scanner.nextInt();

        int anss = 0;
        int ansm = 0;

        if(saat == 0){
            anss = 0;
        }
        if(daghighe == 0){
            ansm = 0;
        }
        if(saat != 0){
            anss = 12 - saat;
        }
        if(daghighe != 0){
            ansm = 60 - daghighe;
        }

        System.out.printf("%02d:%02d",anss,ansm);


    }
}
