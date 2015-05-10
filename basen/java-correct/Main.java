import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int b = sc.nextInt();
			int t = sc.nextInt();
			StringBuilder sb = new StringBuilder();
			while (t > 0) {
				int d = t % b;
				if (d < 10)
					sb.insert(0, d);
				else
					sb.insert(0, (char) ('A' + d - 10));
				t /= b;
			}
			System.out.println(sb.toString());
		}
		sc.close();
	}

}