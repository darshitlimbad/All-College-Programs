using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace arraymulti
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,,] arr = new int[2,2,2];
            
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    for (int k = 0; k < 2; k++)
                    {
                        Console.Write("enter number:");
                        arr[i,j,k] = Convert.ToInt32(Console.ReadLine());
                    }
                }
                
            }

            foreach (int i in arr)
            {
                Console.Write(i + " ");
            }
            Console.Read();
        }
    }
}
