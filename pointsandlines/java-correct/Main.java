import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		while (d-- > 0) {
			int n = sc.nextInt();
			int[] x = new int[n];
			int[] y = new int[n];
			for (int i = 0; i < n; i++) {
				x[i] = sc.nextInt();
				y[i] = sc.nextInt();
			}
			int ret = 0;
			for (int i = 0; i < n; i++)
				for (int j = i + 1; j < n; j++) {
					int cnt = 0;
					for (int k = 0; k < n; k++) {
						if (isSameFraction(x[j] - x[i], y[j] - y[i], x[k]
								- x[i], y[k] - y[i]))
							cnt++;
					}
					ret = Math.max(cnt, ret);
				}
			System.out.println(ret);
		}
		sc.close();
	}

	private static boolean isSameFraction(int a, int b, int c, int d) {
		return b * c == a * d;
	}

}