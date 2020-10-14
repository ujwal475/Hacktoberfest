/*Note: Please replace the Console.Write line with printf() statements appropriately 
before running the program*/

#inlcude<stdio.h>
#inclde<conio.h>
using namespace std;

void HalfPyramind()
{
  //half pyramid
  int i, j;
  Console.WriteLine("Rows?");
  int rows = int.Parse(Console.ReadLine());
  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= i; j++)
        Console.Write("*");
        onsole.WriteLine();
  }
}

void InvertedHalfPyramid()
        {
            int i, j;
            Console.Write("Rows?; ");
            int rows = int.Parse(Console.ReadLine());

            for (i = rows; i >= 1; --i)
            {
                for (j = 1; j <= i; j++)
                    Console.Write("* ");
                Console.WriteLine();
            }
        }
void FullPyramind()
        {

            int i, space, k = 0;
            Console.Write("Rows:? ");

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
                    Console.Write("*");
                    k++;
                }
                Console.WriteLine();
            }

        }

void FullInvertedPyramind()
        {
            int i, j, space;
            Console.Write("Rows:?");
            int rows = int.Parse(Console.ReadLine());

            for (i = rows; i >= 1; i--)
            {
                for (space = 0; space < rows - i; space++)
                {
                    Console.Write(" ");
                }
                // Console.WriteLine();

                for (j = i; j <= (2 * i - 1); j++)
                {
                    Console.Write("*");
                }

                for (j = 0; j < (i - 1); j++)
                    Console.Write("*");
                Console.WriteLine();

            }
        }
        
int main(){
  HalfPyramind();
  Console.WriteLine();
  
  InvertedHalfPyramid();
  Console.WriteLine();
  
  FullPyramind();
  Console.WriteLine();
  
  FullInvertedPyramind();
  Console.WriteLine();
return 0;
}
