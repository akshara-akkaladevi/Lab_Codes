import java.io.BufferedReader;
import java.io.InputStreamReader;

public class addTwoNumbersUsingBuffer {
    public static void main(String[] args) {
        InputStreamReader r = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(r);
        int num1 = Integer.parseInt(br.readLine());
        int num2 = Integer.parseInt(br.readLine());
        int sum = num1 + num2;
        System.out.println("The sum of a and b is: "+sum);
    }
}
