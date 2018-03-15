using System;

public class Program {
    public static void Main() {
        int n = int.Parse(Console.ReadLine());
        String[] s = Console.ReadLine().Split(' ');
        int[] a = new int[n];
        for (int i=0; i<n; i++) {
            a[i] = int.Parse(s[i]);
        }
        DateTime start = DateTime.Now;
        Array.Sort(a);
        DateTime end = DateTime.Now;
        TimeSpan span = end - start;
        Console.WriteLine(span.TotalMilliseconds);
    }
}

