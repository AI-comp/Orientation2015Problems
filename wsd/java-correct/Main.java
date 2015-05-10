import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		for (int k = 0; k < d; k++) {
			int n = sc.nextInt();
			String[] field = new String[n];
			for (int i = 0; i < n; i++)
				field[i] = sc.next();
			int result = 0;
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					if (field[i].charAt(j) == 'W') {
						if (j >= 2 && field[i].charAt(j - 1) == 'S'
								&& field[i].charAt(j - 2) == 'D')
							result++;
						if (j < n - 2 && field[i].charAt(j + 1) == 'S'
								&& field[i].charAt(j + 2) == 'D')
							result++;
						if (i >= 2 && field[i - 1].charAt(j) == 'S'
								&& field[i - 2].charAt(j) == 'D')
							result++;
						if (i < n - 2 && field[i + 1].charAt(j) == 'S'
								&& field[i + 2].charAt(j) == 'D')
							result++;
					}
			System.out.println(result);
		}
		sc.close();
	}

}