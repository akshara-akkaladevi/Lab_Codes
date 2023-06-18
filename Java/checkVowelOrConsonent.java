import java.util.Scanner;

public class checkVowelOrConsonent {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'O' || ch == 'I' || ch == 'E' || ch == 'U'){
            System.out.println("The character is a vowel");
        } else {
            System.out.println("The character is a consonent");
        } 
    }
}
