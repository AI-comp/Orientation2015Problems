import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		for (int i = 0; i < d; i++) {
			int n = sc.nextInt();
			int[] stones = new int[n];
			for (int j = 0; j < n; j++)
				stones[j] = sc.nextInt();
			int result = 0;
			for (int j = n - 1; j > 0; j--)
				for (int k = 0; k < j; k++) {
					if (stones[k] > stones[k + 1]) {
						result++;
						stones[k] = 0;
						stones[k + 1] = 1;
					}
				}
			System.out.println(result);
		}
		sc.close();
	}
}
