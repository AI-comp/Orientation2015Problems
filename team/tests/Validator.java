import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0)
				break;
			checkRange(n, 1, 1000);
			for (int i = 0; i < n; i++) {
				checkRange(sc.nextInt(), -10000, 10000);
			}
			for (int i = 0; i < n; i++) {
				checkRange(sc.nextInt(), -10000, 10000);
			}
		}
		sc.close();
	}

	static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}
}
