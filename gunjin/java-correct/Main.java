import java.util.Scanner;

public class Main {
	private static int[][] table = {
			{ 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 1 },
			{ 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
			{ 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
			{ 0, 0, 0, 1, 2, 2, 2, 2, 2, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 0, 1, 2, 2, 2, 2, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 0, 0, 1, 2, 2, 2, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 0, 0, 0, 1, 2, 2, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 2, 2, 1 },
			{ 0, 0, 0, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2 },
			{ 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 1, 2, 0, 2, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 2, 2 },
			{ 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1 }, };

	private static String[] pieces = { "GEN", "LTG", "MJG", "COL", "LTC",
			"MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY",
			"MIN", };

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			String f = sc.next();
			String e = sc.next();
			int m = table[findId(f)][findId(e)];
			if (m == 2)
				System.out.println("FRIEND");
			if (m == 1)
				System.out.println("DRAW");
			if (m == 0)
				System.out.println("ENEMY");
		}
		sc.close();
	}

	private static int findId(String str) {
		for (int i = 0; i < pieces.length; i++) {
			if (str.equals(pieces[i]))
				return i;
		}
		System.err.println(str);
		return -1;
	}
}
