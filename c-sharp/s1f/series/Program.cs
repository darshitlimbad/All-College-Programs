using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace s1f
{
    class Program
    {
        static void Main(string[] args)
        {
            //1,2,3,6,18,108,   n
            int i = 1, old = 1, New = 1;
            Console.Write("enter N value:");
            int n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(n);
            //while(i<=n) for while loop
            //do (fow do..while loop)
            for (i = 1; i <= n; )
            {
                Console.Write(i + " ");
                old = i;
                i = i * New;
                New = old;
                if (i < 3)
                {
                    i++;
                }
            }
            //while(i<=n) (for dowhile loop)
            Console.WriteLine(", ...");
            Console.ReadKey();
        }
    }
}
