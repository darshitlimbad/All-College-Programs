using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace conditional
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Age :");
            int age = Convert.ToInt32(Console.ReadLine());

            if (age > 25)
            {
                if (age < 60)
                {
                    Console.WriteLine("mature");
                }
                else
                {
                    Console.WriteLine("senior citizen");
                }
            }
            else if (age > 18)
            {
                Console.WriteLine("Teen");
            }
            else
            {
                Console.WriteLine("kid");
            }

            Console.Read();
        }
    }
}
