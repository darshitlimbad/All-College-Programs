using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace box_unbox
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 10;
            object obj = i;
            Console.WriteLine(obj);
            int j = (int)obj;
            Console.WriteLine(j);

            Console.Read();
        }
    }
}
