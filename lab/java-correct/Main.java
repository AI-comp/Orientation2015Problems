import java.util.Arrays;
import java.util.Scanner;

public class Main {
	private static int[] drinks = { 86, 50, 25, 15, 9, 5, 1 };
	private static int[] price = { 5000, 3000, 1600, 960, 600, 360, 120 };

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] prices = new int[1001];
		Arrays.fill(prices, Integer.MAX_VALUE);
		prices[0] = 0;
		for (int i = 0; i < prices.length; i++) {
			for (int j = 0; j < drinks.length; j++) {
				if (i >= drinks[j]) {
					prices[i] = Math.min(prices[i], prices[i - drinks[j]]
							+ price[j]);
				}
			}
		}
		int d = sc.nextInt();
		for (int i = 0; i < d; i++) {
			int n = sc.nextInt();
			System.out.println(prices[n]);
		}
		sc.close();
	}

}