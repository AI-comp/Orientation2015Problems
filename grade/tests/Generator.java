import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Random;

public class Generator {
	private static Random rnd = new Random(System.currentTimeMillis());
	private static boolean b = false;

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
				if (i % 10 == 0)
					b = false;
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
				if (i % 50 == 0)
					b = false;
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
		generateLargeTestCase(stream);
	}

	private static void generateLargeTestCase(PrintStream stream) {
		int g;
		if (b)
			g = generateRandomNum(0, 4);
		else
			g = generateRandomNum(0, 5);
		int a = 0, e = 0, sum = 0;
		switch (g) {
		case 0:
			sum = generateRandomNum(90, 100);
			a = generateRandomNum(sum - 80, 20);
			e = sum - a;
			break;
		case 1:
			sum = generateRandomNum(80, 89);
			a = generateRandomNum(sum - 80, 20);
			e = sum - a;
			break;
		case 2:
			sum = generateRandomNum(70, 79);
			a = generateRandomNum(0, 20);
			e = sum - a;
			break;
		case 3:
			sum = generateRandomNum(60, 69);
			a = generateRandomNum(0, 20);
			e = sum - a;
			break;
		case 4:
			sum = generateRandomNum(1, 59);
			a = generateRandomNum(0, Math.min(20, sum));
			e = sum - a;
			break;
		case 5:
			b = true;
			break;
		}
		stream.println(a + " " + e);
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}

}
