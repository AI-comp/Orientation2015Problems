import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		checkRange(n, 1, 1000);
		for (int i = 0; i < n; i++) {
			checkRange(sc.nextInt(), 0, 20);
			checkRange(sc.nextInt(), 0, 80);
		}
		sc.close();
	}

	static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}
}
