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
		generateSmallInputFile();
		generateLargeInputFile();
		for (int i = 0; i < 10; i++)
			generateRandomInputFile(i);
	}

	private static void generateSmallInputFile() {
		File file = new File("20-small.in");
		try {
			PrintStream stream = new PrintStream(file);
			int n = 20;
			stream.println(n);
			for (int i = 0; i < n; i++) {
				generateSmallTestCase(stream);
			}
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateLargeInputFile() {
		File file = new File("21-large.in");
		try {
			PrintStream stream = new PrintStream(file);
			int n = 1000;
			stream.println(n);
			for (int i = 0; i < n; i++) {
				generateLargeTestCase(stream);
			}
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateRandomInputFile(int index) {
		File file = new File((50 + index) + "-random" + index + ".in");
		try {
			PrintStream stream = new PrintStream(file);
			int n = generateRandomNum(1, 100);
			stream.println(n);
			for (int i = 0; i < n; i++) {
				generateLargeTestCase(stream);
			}
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateSmallTestCase(PrintStream stream) {
		int f = generateRandomNum(0, pieces.length - 1);
		int e = generateRandomNum(0, pieces.length - 1);
		StringBuilder sb = new StringBuilder();
		sb.append(pieces[f]);
		sb.append(" ");
		sb.append(pieces[e]);
		stream.println(sb.toString());
	}

	private static void generateLargeTestCase(PrintStream stream) {
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
