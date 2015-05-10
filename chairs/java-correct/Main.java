import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		for (int j = 0; j < d; j++) {
			int n = sc.nextInt();
			int t = sc.nextInt();
			if ((n | t) == 0)
				break;
			int m = sc.nextInt();
			int[] r = new int[m];
			for (int i = 0; i < m; i++)
				r[i] = sc.nextInt();

			for (int i = 0; i < m; i++) {
				r[i] += t;
				r[i] %= n;
			}
			Arrays.sort(r);

			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < m; i++) {
				if (sb.length() > 0)
					sb.append(" ");
				sb.append(r[i]);
			}
			System.out.println(sb.toString());
		}
		sc.close();
	}
}
