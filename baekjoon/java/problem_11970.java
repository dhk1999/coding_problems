import java.util.Scanner;

public class Main {
    public static int a, b, c, d;
    public static void main(String[] args) {

        int result = 0;

        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        d = in.nextInt();

        int[] f = new int[101];

        for(int i = a; i < b; i++) {
            f[i] = 1;
        }

        for(int i = c; i < d; i++) {
            f[i] = 1;
        }

        for(int i = 0; i < 101; i++) {
            if(f[i] == 1) {
                ++result;
            }
        }


        System.out.println(result);

    }
}
