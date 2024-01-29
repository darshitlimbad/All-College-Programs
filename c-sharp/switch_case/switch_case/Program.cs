using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace switch_case
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("enter 1 for red bg.");
            Console.WriteLine("enter 2 for blue bg.");
            Console.WriteLine("enter 3 for white bg.");
            int color = Convert.ToInt16(Console.ReadLine());
            

            switch (color) {
                case 1:
                    Console.BackgroundColor = ConsoleColor.Red;
                    break;
                case 2 :
                    Console.BackgroundColor = ConsoleColor.Blue;
                    break;
                case 3 :
                    Console.BackgroundColor = ConsoleColor.White;
                    Console.ForegroundColor= ConsoleColor.Black;
                    break;
                default :
                    Console.WriteLine("no match");
                    break;
            }
            Console.Clear();
            Console.Read();
        }
    }
}
