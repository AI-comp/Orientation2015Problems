import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			int t = sc.nextInt();
			if ((n | t) == 0)
				break;
			checkRange(n, 2, 1000);
			checkRange(t, 1, 10000);
			int m = sc.nextInt();
			checkRange(m, 1, n - 1);
			List<Integer> list = new ArrayList<Integer>();
			for (int i = 0; i < m; i++) {
				int c = sc.nextInt();
				checkRange(c, 0, n - 1);
				if (list.contains(c))
					System.exit(1);
				list.add(c);
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
