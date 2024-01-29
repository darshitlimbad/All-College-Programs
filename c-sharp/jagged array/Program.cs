using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace jagged_array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[][] arr = new int[3][];

            arr[0] = new int[3];
            arr[1] = new int[2];
            arr[2] = new int[4];

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < arr[i].Length; j++)
                {
                    arr[i][j] = j;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < arr[i].Length; j++)
                {
                    Console.Write(arr[i][j] + " ");
                }
                Console.WriteLine();
            }

            Console.ReadLine();
        }
    }
}
