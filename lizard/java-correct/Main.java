import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d = sc.nextInt();
		for (int i = 0; i < d; i++) {
			int n = sc.nextInt();
			String str = sc.next();
			for (char c : str.toCharArray()) {
				if (n == 0)
					break;
				if (c == 'w')
					n += 3;
				if (c == 'c')
					n /= 2;
			}
			System.out.println(n);
		}
		sc.close();
	}
}
