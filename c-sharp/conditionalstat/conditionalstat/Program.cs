using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace conditionalstat
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 10;

            if (i == 1)
            {
                Console.WriteLine(i);
            }
            else if (i == 4)
            {
                Console.WriteLine(i);
            }
            else if (i == 10)
            {
                if (i != 9)
                {
                    Console.WriteLine(i);
                }
            }
        }
    }
}
