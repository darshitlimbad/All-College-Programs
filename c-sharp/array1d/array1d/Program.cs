using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace array1d
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[5];

            for (int i = 0; i < 5; i++) 
            {
                Console.Write("enter number:");
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            foreach (int i in arr)
            {
                Console.Write(i + " ");
            }
            Console.Read();
        }
    }
}
