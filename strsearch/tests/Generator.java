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
			for (int i = 0; i < 20; i++) {
				generateTestCase(stream);
			}
			stream.println("0");
		} catch (FileNotFoundException e) {
			return;
		}
	}

	private static void generateTestCase(PrintStream stream) {
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
