import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		for (int i = 0; i < d; i++) {
			int b = sc.nextInt();
			int n = sc.nextInt();
			checkRange(b, 2, 32);
			checkRange(n, 1, 1000000000);
		}
		sc.close();
	}

	private static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}

}
