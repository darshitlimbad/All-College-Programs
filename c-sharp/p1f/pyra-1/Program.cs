using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace pyra_1
{
    class Program
    {
        static void Main(string[] args)
        {
            /*1 
             *2 3 
             *6 18 108 n*/

            int i = 1, j = 1, old = 1, New = 1, row = 1; ;
            Console.Write("enter N value:");
            int n = Convert.ToInt32(Console.ReadLine());
            //for(;i<=n;)
            //while(i<=n)
            do
            {
                for (j = 1; j <= row; j++)
                {
                    if (i > n)
                    {
                        break;
                    }
                    Console.Write(i + " ");
                    old = i;
                    i = i * New;
                    New = old;
                    if (i < 3)
                    {
                        i++;
                    }
                }
                row++;
                Console.WriteLine();
            } while (i <= n);
            
            Console.WriteLine(", ...");
            Console.ReadKey();
        }
    }
}
