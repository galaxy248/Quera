import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String opt = scanner.next();
        String b = scanner.next();

        if (b.length() > a.length()) {
            String temp;
            temp = a;
            a = b;
            b = temp;
        }

        int numa = a.length();
        int numb = b.length();

        if(opt.contains("*")){
            while(numb > 1){
                a += "0";
                numb--;
            }
        }

        if(opt.contains("+")){
            if(numa != numb) {
                int index = a.length() + 1 - b.length() - 1;
                a = a.substring(0, index) + '1' + a.substring(index + 1);
            }
            if(numa == numb){
                int index = 0;
                a = a.substring(0, index) + '2' + a.substring(index + 1);
            }
        }

        System.out.print(a);
    }
}