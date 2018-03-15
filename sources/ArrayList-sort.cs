using System;
using System.Collections;

public class Program {
    public static void Main() {
        int n = int.Parse(Console.ReadLine());
        String[] s = Console.ReadLine().Split(' ');
        ArrayList a = new ArrayList();
        for (int i=0; i<n; i++) {
            a.Add(int.Parse(s[i]));
        }
        DateTime start = DateTime.Now;
        a.Sort();
        DateTime end = DateTime.Now;
        TimeSpan span = end - start;
        Console.WriteLine(span.TotalMilliseconds);
    }
}

