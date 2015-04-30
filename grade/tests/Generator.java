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
		StringBuilder sb = new StringBuilder();
		sb.append(generateRandomNum(0, 20));
		sb.append(" ");
		sb.append(generateRandomNum(0, 80));
		stream.println(sb.toString());
	}

	private static int generateRandomNum(int min, int max) {
		int len = max - min + 1;
		return rnd.nextInt(len) + min;
	}
}
