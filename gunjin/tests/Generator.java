import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Random;

public class Generator {
	private static Random rnd = new Random(System.currentTimeMillis());
	private static String[] pieces = { "GEN", "LTG", "MJG", "COL", "LTC",
			"MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY",
			"MIN", };

	public static void main(String[] args) {
		for (int i = 0; i < 10; i++)
			generateFile(i);
	}

	private static void generateFile(int index) {
		File file = new File((50 + index) + "-random" + index + ".in");
		try {
			PrintStream stream = new PrintStream(file);
			int n = generateRandomNum(1, 1000);
			stream.println(n);
			for (int i = 0; i < n; i++) {
				generateTestCase(stream);
			}
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateTestCase(PrintStream stream) {
		int f = generateRandomNum(0, pieces.length - 1);
		int e = generateRandomNum(0, pieces.length - 1);
		StringBuilder sb = new StringBuilder();
		sb.append(pieces[f]);
		sb.append(" ");
		sb.append(pieces[e]);
		stream.println(sb.toString());
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}

}
