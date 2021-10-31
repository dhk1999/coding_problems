import java.util.*;

public class Main {
    public static List<String> ss = new ArrayList<>();
    public static int testCase = 0;

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        testCase = in.nextInt();
        in.nextLine();


        for (int i = 0; i < testCase; i++) {
            String str = in.nextLine();
            String[] inArr = str.split(" ");
            str = "";
            for(int j = inArr.length - 1; j >= 0; j--) {
                str += (inArr[j] + " ");
            }
            str = "Case #"+(i+1)+": "+str;
            ss.add(str);
        }

        for (int i = 0; i < testCase; i++) {
            System.out.println(ss.get(i));
        }
    }
}
