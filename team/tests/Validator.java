import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		checkRange(m, 1, 100);
		for (int i = 0; i < m; i++) {
			int n = sc.nextInt();
			checkRange(n, 1, 1000);
			for (int j = 0; j < n; j++) {
				checkRange(sc.nextInt(), -10000, 10000);
			}
			for (int j = 0; j < n; j++) {
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
