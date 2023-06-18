import java.util.Scanner;

public class areaCircumferenceCircle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double radius = sc.nextDouble();
        double area = Math.PI * radius * radius;
        double circumference = 2 * Math.PI * radius;
        System.out.println("The area of the circle is: "+area);
        System.out.println("The circumference of the circle is: "+circumference);
    }
}
