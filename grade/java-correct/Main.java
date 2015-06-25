import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int attendance = sc.nextInt();
			int exam = sc.nextInt();
			int sum = attendance + exam;
			if (sum >= 90)
				System.out.println("A+");
			else if (sum >= 80)
				System.out.println("A");
			else if (sum >= 70)
				System.out.println("B");
			else if (sum >= 60)
				System.out.println("C");
			else if (sum >= 1)
				System.out.println("F");
			else
				System.out.println("G");
		}
		sc.close();
	}
}
