import java.util.Scanner;

public class Greeter {
	public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	System.out.println("What is your full name ?");
	String fullName = scanner.nextLine();
	System.out.printf("Hello, %s!%n", fullName);

	}
}
