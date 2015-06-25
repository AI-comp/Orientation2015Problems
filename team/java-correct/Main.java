import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		for (int i = 0; i < m; i++) {
			int n = sc.nextInt();
			int[] friends = new int[n];
			int[] opponents = new int[n];
			for (int j = 0; j < opponents.length; j++) {
				friends[j] = sc.nextInt();
			}
			for (int j = 0; j < opponents.length; j++) {
				opponents[j] = sc.nextInt();
			}
			int wins = 0, loses = 0;
			for (int j = 0; j < opponents.length; j++) {
				if (friends[j] > opponents[j])
					wins++;
				if (friends[j] < opponents[j])
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
