import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		checkRange(d, 1, 100);
		for (int j = 0; j < d; j++) {
			int n = sc.nextInt();
			checkRange(n, 3, 30);
			for (int i = 0; i < n; i++) {
				String str = sc.next();
				checkRange(str.length(), n, n);
				for (char c : str.toCharArray()) {
					if (c == 'W' || c == 'S' || c == 'D')
						continue;
					System.exit(1);
				}
			}
		}
		sc.close();
	}

	private static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}

}
