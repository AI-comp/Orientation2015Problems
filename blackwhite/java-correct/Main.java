import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0)
				break;
			int[] stones = new int[n];
			for (int i = 0; i < n; i++)
				stones[i] = sc.nextInt();
			int result = 0;
			for (int i = n - 1; i > 0; i--)
				for (int j = 0; j < i; j++) {
					if (stones[j] > stones[j + 1]) {
						result++;
						stones[j] = 0;
						stones[j + 1] = 1;
					}
				}
			System.out.println(result);
		}
		sc.close();
	}
}
