import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		checkRange(d, 1, 100);
		for (int j = 0; j < d; j++) {
			int n = sc.nextInt();
			checkRange(n, 1, 100);
			for (int i = 0; i < n; i++) {
				int g = sc.nextInt();
				checkRange(g, 0, 1);
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
