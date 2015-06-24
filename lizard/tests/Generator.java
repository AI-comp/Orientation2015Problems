import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Random;

public class Generator {
	private static Random rnd = new Random(System.currentTimeMillis());

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
			int n = 10;
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
			int n = 100;
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
		StringBuilder sb = new StringBuilder();
		int n = generateRandomNum(1, 20);
		sb.append(n).append(" ");
		int len = generateRandomNum(1, 10);
		for (int i = 0; i < len; i++) {
			int t = generateRandomNum(0, 2);
			if (t == 0)
				sb.append('c');
			else
				sb.append('w');
		}
		stream.println(sb.toString());
	}

	private static void generateLargeTestCase(PrintStream stream) {
		StringBuilder sb = new StringBuilder();
		int n = generateRandomNum(1, 100);
		sb.append(n).append(" ");
		int len = generateRandomNum(1, 100);
		for (int i = 0; i < len; i++) {
			int t = generateRandomNum(0, 2);
			if (t == 0)
				sb.append('c');
			else
				sb.append('w');
		}
		stream.println(sb.toString());
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}

}
