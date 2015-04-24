import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
public class Main {
	static BufferedReader br;
	static StringTokenizer st;
	static PrintWriter pw;
	static int res = 0;
	static int [] x;
	
	public static void main(String[] args) throws Exception {
		br = new BufferedReader(new InputStreamReader(System.in));
		pw = new PrintWriter(new BufferedWriter(new FileWriter("a.out")));
		Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        int sum = 0;
        x = new int [(2 << n) - 2];
        for (int i = 0; i < (2 << n) - 2; i++) {
        	x [i] = in.nextInt();
        }
        get (n);
        System.out.println(res);
	    }
	
	public static void get (int n) {
		int max = 0;
		if (n == 0) return;
		for (int i = (2 << n) - 1; i >= 1 << n; i --) {
			if (x [i - 2] > max)
				max = x [i - 2];
		}
		
		for (int i = (2 << n) - 1; i >= 1 << n; i -= 2) {
			res += Math.abs(x [i- 2] - x [i - 3]);
			if (i/2 - 2 >= 0)
			    x [i/2 - 2] -= max - Math.max(x [i - 2], x [i - 3]);
		}
		get (n - 1);
	}


	public static int readInt() {
		return Integer.parseInt(nextToken());
	}

	public static long readLong() {
		return Long.parseLong(nextToken());
	}

	public static double readDouble() {
		return Double.parseDouble(nextToken());
	}

	public static String nextToken() {
		while(st == null || !st.hasMoreTokens())	{
			try {
				if(!br.ready())	{
					pw.close();
					System.exit(0);
				}
				st = new StringTokenizer(br.readLine());
			}
			catch(IOException e) {
				System.err.println(e);
				System.exit(1);
			}
		}
		return st.nextToken();
	}

	public static String readLine()	{
		st = null;
		try {
			return br.readLine();
		}
		catch(IOException e) {
			System.err.println(e);
			System.exit(1);
			return null;
		}
	}

}
