import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		checkRange(d, 1, 100);
		for (int i = 0; i < d; i++) {
			int n = sc.nextInt();
			checkRange(n, 1, 1000);
		}
		sc.close();
	}

	private static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}

}
