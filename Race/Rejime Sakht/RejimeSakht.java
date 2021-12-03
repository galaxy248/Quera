import java.util.Scanner;

public class Main {

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();
        int r = 0 , g = 0 , y = 0;
        for(int i = 0 ; i < input.length() ; i++){
            if(input.charAt(i) == 'R'){
                r++;
            }
            if(input.charAt(i) == 'Y'){
                y++;
            }
            if(input.charAt(i) == 'G'){
                g++;
            }
        }


        if( (r >= 2 && y >= 2) || (y==4 && r==1)  || y == input.length() || r == input.length() || (r >= 3) ) {
            System.out.println("nakhor lite");
        } else {
            System.out.println("rahat baash");
        }

    }
}