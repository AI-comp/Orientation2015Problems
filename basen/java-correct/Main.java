import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int b = sc.nextInt();
			int n = sc.nextInt();
			if ((b | n) == 0)
				break;
			StringBuilder sb = new StringBuilder();
			while (n > 0) {
				int d = n % b;
				if (d < 10)
					sb.insert(0, d);
				else
					sb.insert(0, (char) (d - 10 + 'A'));
				n /= b;
			}
			System.out.println(sb.toString());
		}
		sc.close();
	}

}