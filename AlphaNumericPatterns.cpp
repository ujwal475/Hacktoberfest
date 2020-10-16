/*Please NOTE: please replace the Console.Write() line with printf() accordingly*/

#inlcude<stdio.h>
#include<conio.h>
using anmespace std;

void NumHalfPyramind()
        {
            //Numeric Half Pyramind
            int i, j;
            Console.WriteLine("Rows?:");
            int rows = int.Parse(Console.ReadLine());

            for (i = 1; i <= rows; i++)
            {
                for (j = 1; j <= i; j++)
                    Console.Write(" " + i);
                Console.WriteLine();

            }
        }

void AlphabeticHalfPyramind()
        {
            int i, j;
            char alph = 'A';
            Console.WriteLine("Rows?:");
            int rows = int.Parse(Console.ReadLine());

            for (i = 1; i <= rows; i++)
            {
                for (j = 1; j <= i; j++)
                    Console.Write(" " + alph);
                Console.WriteLine();
                alph++;

            }

        }

void InvertedofNumbers()
        {
            int i, j;
            Console.Write("Rows?; ");
            int rows = int.Parse(Console.ReadLine());

            for (i = rows; i >= 1; --i)
            {
                for (j = 1; j <= i; j++)
                    Console.Write(" " + j);
                Console.WriteLine();
            }
        }
        
void fullnumPyramid()
        {
            int i, space, num = 1, k = 0;
            Console.WriteLine("Rows:? ");
            int rows = int.Parse(Console.ReadLine());

            for (i = 1; i <= rows; i++)
            {
                k = 0;
                for (space = 1; space <= rows - i; space++)
                {
                    Console.Write(" ");
                }
                while (k != (2 * i - 1))
                {
                    Console.Write(" " + num);
                    k++;
                    num++;
                }
                Console.WriteLine();
            }
        }

void numMirrorPyramid()
        {
            int i, space, k;
            int count = 0, count1 = 0; ;
            Console.Write("Rows:? ");
            int rows = int.Parse(Console.ReadLine());

            for (i = 1; i <= rows; i++)
            {
                k = 0; count = 0; count1 = 0;
                for (space = 1; space <= rows - i; space++)
                {
                    Console.Write(" ");
                    ++count;
                }
                while (k != 2 * i - 1)
                {
                    if (count <= rows - 1)
                    {
                        Console.Write((i + k));
                        count++;
                    }
                    else
                    {
                        ++count1;
                        Console.Write((i + k - 2 * count1));
                    }
                    k++;
                }
                Console.WriteLine();
            }
        }

int main(){
  NumHalfPyramind();
  Console.WriteLine();
  
  AlphabeticHalfPyramind();
  Console.WriteLine();
  
  InvertedofNumbers();
  Console.WriteLine();
  
  fullnumPyramid();
  Console.WriteLine();
  
  numMirrorPyramid();
  Console.WriteLine();
  
  return 0;
}
