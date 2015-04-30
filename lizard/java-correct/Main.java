import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			String str = sc.next();
			if (str.equals("end"))
				break;
			int l = 1;
			for (char c : str.toCharArray()) {
				if (l == 0)
					break;
				if (c == 'w')
					l += 3;
				if (c == 'c')
					l /= 2;
			}
			System.out.println(l);
		}
		sc.close();
	}
}
