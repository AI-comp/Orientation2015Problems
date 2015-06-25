import java.util.Scanner;

public class Validator {
	private static String[] pieces = { "GEN", "LTG", "MJG", "COL", "LTC",
			"MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY",
			"MIN", };

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		checkRange(n, 1, 1000);
		for (int i = 0; i < n; i++) {
			String f = sc.next();
			String e = sc.next();
			checkContains(f);
			checkContains(e);
		}
		sc.close();
	}

	private static void checkRange(int n, int min, int max) {
		if (n >= min && n <= max)
			return;
		System.exit(1);
	}

	private static void checkContains(String str) {
		for (String piece : pieces) {
			if (piece.equals(str))
				return;
		}
		System.exit(1);
	}

}
