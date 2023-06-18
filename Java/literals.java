
import java.io.*;
import java.util.Scanner;

class Literals {
    public static void main(String args[]) {
        System.out.println("\"Integer literals\"");
        int decimalNumber = 10;
        int octalNumber = 0456;
        int hexadecimalNumber = 0x10;
        long longNumber = 10L;
        System.out.println("\nDecimal: " + decimalNumber + "\nOctal: " + octalNumber + "\nHexadecimal: " + hexadecimalNumber + "\nLong: " + longNumber);
        System.out.println("\n\"Floating point literals\"");
        float floatNumber = 123.456f;
        double doubleNumber1 = 123.446;
        double doubleNumber2 = 0777;
        double doubleNumber3 = 0xface;
        double doubleNumber4 = 1.2e3;
        float floatNumberExp = 5.6e3f;
        System.out.println("\nFloat: " + floatNumber + "\nDouble: " + doubleNumber1 + "\nOctal double: " + doubleNumber2 + "\nHexadecimal double: " + doubleNumber3 + "\nDouble exponential: " + doubleNumber4 + "\nFloat exponential: " + floatNumberExp);
        System.out.println("\n\"String literals\"");
        String stringLiteral = "Hello! world.";
        System.out.println("\nString: " + stringLiteral);
        System.out.println("\n\"Character literals\"");
        char character1 = 'a';
        char character2 = 97;
        char character3 = 0xface;
        char character4 = 0777;
        char character5 = 65535;
        char newline = '\n';
        System.out.println("\nCharacter: " + character1 + "\nUnicode value: " + character2 + "\nHexadecimal: " + character3 + "\nOctal: " + character4 + "\nUnicode value: " + character5 + "\nEscape characters: " + newline);
        System.out.println("\n\"1.7 version Enhancements\"");
        int binaryNumber = 0b1011;
        double doubleNumber5 = 1_23_456.789;
        float floatNumber2 = 10l;
        System.out.println("\nBinary: " + binaryNumber + "\nDouble: " + doubleNumber5 + "\nFloat: " + floatNumber2);
    }
}
