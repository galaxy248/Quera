import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int ans  ;
        if ( n <= 3 ){
            ans = 2 * n;
        }else{
            if(n%2 == 0){
                ans = (n/2+1) * (n/2+1);
            }else{
                int b = (n/2)+1;
                ans = (n/2+1) * (n/2+1) + b;
            }
        }
        System.out.println(ans);

    }
}
