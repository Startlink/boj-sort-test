import java.util.*;

public class Main3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }
        TreeMap<Integer, Integer> d = new TreeMap<>();
        int k = 0;
        long start = System.currentTimeMillis();
        for (int i=0; i<n; i++) {
            Integer cur = d.get(a[i]);
            if (cur == null) {
                cur = 0;
            }
            cur += 1;
            d.put(a[i], cur);
        }
        for (Map.Entry<Integer, Integer> e : d.entrySet()) {
            Integer key = e.getKey();
            Integer val = e.getValue();
            for (int j=0; j<val; j++) {
                a[k++] = key;
            }
        }
        long end = System.currentTimeMillis();
        System.err.println((end-start));
    }
}


