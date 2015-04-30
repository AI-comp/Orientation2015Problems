import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0)
				break;
			int[] friends = new int[n];
			int[] opponents = new int[n];
			for (int i = 0; i < opponents.length; i++) {
				friends[i] = sc.nextInt();
			}
			for (int i = 0; i < opponents.length; i++) {
				opponents[i] = sc.nextInt();
			}
			int wins = 0, loses = 0;
			for (int i = 0; i < opponents.length; i++) {
				if (friends[i] > opponents[i])
					wins++;
				if (friends[i] < opponents[i])
					loses++;
			}
			if (wins > loses)
				System.out.println("RED");
			if (wins < loses)
				System.out.println("BLUE");
			if (wins == loses)
				System.out.println("DRAW");
		}
		sc.close();
	}
}
