import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Random;

public class Generator {
	private static Random rnd = new Random(System.currentTimeMillis());

	public static void main(String[] args) {
		for (int i = 0; i < 10; i++)
			generateFile(i);
	}

	private static void generateFile(int index) {
		File file = new File((50 + index) + "-random" + index + ".in");
		try {
			PrintStream stream = new PrintStream(file);
			int d = generateRandomNum(1, 100);
			stream.println(d);
			for (int i = 0; i < d; i++) {
				generateTestCase(stream);
			}
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateTestCase(PrintStream stream) {
		int v = generateRandomNum(2, 1000);
		int e = generateRandomNum(0, 1000);
		stream.println(v + " " + e);
		for (int i = 0; i < e; i++) {
			int s = generateRandomNum(1, v);
			int g = generateRandomNum(1, v);
			while (s == g)
				g = generateRandomNum(1, v);
			stream.println(s + " " + g);
		}
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}

}
