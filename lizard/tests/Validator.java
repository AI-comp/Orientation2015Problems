import java.util.Scanner;

public class Validator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			String str = sc.next();
			if (str.equals("end"))
				break;
			checkRange(str.length(), 1, 100);
			for (char c : str.toCharArray()) {
				if (c != 'w' && c != 'c')
					System.exit(1);
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
