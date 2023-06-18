import java.util.Scanner;
public class checkLeapYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        if (year % 400 == 0) {
            System.out.println("The year is a leap year");
        } else if (year % 100 == 0) {
            System.out.println("The year is not a leap year");
        } else if (year % 4 == 0) {
            System.out.println("The year is a leap year");
        } else {
            System.out.println("The year is not a leap year");
        }
    }
}
