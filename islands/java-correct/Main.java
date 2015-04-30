import java.util.Arrays;
import java.util.Scanner;

public class Main {
	private static boolean[] visited;
	private static boolean[][] bridges;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int v = sc.nextInt();
			int e = sc.nextInt();
			if ((v | e) == 0)
				break;
			visited = new boolean[v];
			Arrays.fill(visited, false);
			bridges = new boolean[v][v];
			for (boolean[] b : bridges)
				Arrays.fill(b, false);
			for (int i = 0; i < e; i++) {
				int s = sc.nextInt() - 1;
				int g = sc.nextInt() - 1;
				bridges[s][g] = true;
				bridges[g][s] = true;
			}
			int result = 0;
			for (int i = 0; i < v; i++) {
				if (!visited[i]) {
					result++;
					visit(i);
				}
			}
			System.out.println(result - 1);
		}
		sc.close();
	}

	private static void visit(int id) {
		visited[id] = true;
		for (int i = 0; i < visited.length; i++) {
			if (!visited[i] && bridges[id][i])
				visit(i);
		}
	}

}