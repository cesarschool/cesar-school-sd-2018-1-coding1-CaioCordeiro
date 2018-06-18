#include <stdio.h>
int i ;
void fizzBizz(int start, int end)
{
    printf("\nFizzBizz::START: %d, %d\n", start, end);
      for (i=start ; i<= end ; i++){
        if ((i % 3 == 0) &&  (i % 5 != 0)){
          printf("Fizz \n");
        }
        if ((i % 5 == 0) && (i % 3 != 0)){
          printf("Bizz \n");
        }
        if ((i % 5 !=0) && (i % 3 != 0)){
          printf("%d \n",i);
        }
        if ((i % 5 == 0)&&(i % 3 == 0)){
          printf("FizzBizz \n");
        }
      }

    // TODO: Your code here!
    // Ex.: printf("Fizz\n");
    
    printf("\nFizzBizz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");
    
    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);
    
    return 0;
}
