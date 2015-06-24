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
			int n = 5;
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
		int n = generateRandomNum(3, 5);
		stream.println(n);
		for (int i = 0; i < n; i++) {
			StringBuilder sb = new StringBuilder();
			for (int j = 0; j < n; j++) {
				int r = generateRandomNum(0, 2);
				if (r == 0)
					sb.append('W');
				if (r == 1)
					sb.append('S');
				if (r == 2)
					sb.append('D');
			}
			stream.println(sb.toString());
		}
	}

	private static void generateLargeTestCase(PrintStream stream) {
		int n = generateRandomNum(3, 30);
		stream.println(n);
		for (int i = 0; i < n; i++) {
			StringBuilder sb = new StringBuilder();
			for (int j = 0; j < n; j++) {
				int r = generateRandomNum(0, 2);
				if (r == 0)
					sb.append('W');
				if (r == 1)
					sb.append('S');
				if (r == 2)
					sb.append('D');
			}
			stream.println(sb.toString());
		}
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}

}
