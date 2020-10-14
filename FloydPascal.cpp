/*Please NOTE: replace all the Console.Write() with appropriate printf before running*/

#include<stdio.h>
#include<conio.h>
using namespace std;

void PascalTriangle()
        {
            int coef = 1, space, i, j;
            Console.Write("Rows:?");
            int rows = int.Parse(Console.ReadLine());

            for (i = 0; i < rows; i++)
            {
                for (space = 1; space <= rows - i; space++)
                {
                    Console.Write(" ");
                }
                for (j = 0; j <= i; j++)
                {
                    if (j == 0)
                    {
                        if (i == 0)
                            coef = 1;
                    }
                    else
                        coef = coef * (i - j + 1) / j;

                    Console.Write(coef + " ");
                }
                Console.WriteLine();
            }
        }

void Floyd()
        {
            int i, j;
            Console.Write("Rows:?");
            int rows = int.Parse(Console.ReadLine());
            int num = 1;
            for (i = 1; i <= rows; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    Console.Write(num + " ");
                    num++;
                }
                Console.WriteLine();
            }
        }

void oddnumPyramid()
        {
            int k, i, space, num = 1;
            Console.Write("n=?: ");
            int n = int.Parse(Console.ReadLine());
            for (i = 1; i <= n; i++)
            {
                for (space = 1; space <= n - i; space++)
                {
                    Console.Write("  ");
                }
                for (k = 1; k <= (2 * i - 1); k++)
                {
                    if (num % 2 != 0)
                    {
                        Console.Write(num + " ");
                        num++;
                    }
                    num++;
                }
                Console.WriteLine();
            }
            num = 1;
            for (i = n; i >= 1; i--)
            {
                for (space = n - 1; space >= i; space--)
                {
                    Console.Write(" ");
                }
                for (k = 1; k < (2 * i - 1); k++)
                {
                    if (num % 2 == 0)
                    {
                        Console.Write(num + " ");
                        num++;
                    }
                    num++;
                }
                Console.WriteLine();
            }
        }
        
int main(){
  PascalTriangle();
  Console.WriteLine();
  
  Floyd();
  Console.WriteLine();

  oddnumPyramid();
  Console.WriteLine();

return 0;
}
