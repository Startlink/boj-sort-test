import java.util.*;

public class Main2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> a = new ArrayList<>(n);
        for (int i=0; i<n; i++) {
            a.add(sc.nextInt());
        }
        long start = System.currentTimeMillis();
        Collections.sort(a);
        long end = System.currentTimeMillis();
        System.err.println((end-start));
    }
}


