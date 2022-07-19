#include <iostream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  srand(time(0)); // Randomize the time to calculate rand();
  int maxRange = rand() % 100 + 30;
  int minRange = 0;
  int answer1 = rand() % maxRange + minRange;
  int guessNumber;
  cout << " ----------------- " << endl << "|| Number Guess Game :||" << endl <<" ----------------- " << endl;
  printf("Answer is between %d - %d \n",answer1-30,answer1+30);
  cout << "Guess The Numbers : ";
  cin >> guessNumber;
  while(!0){
      
    if((guessNumber != answer1) && (guessNumber > 0))
    {
        if(guessNumber > answer1)
        {
          cout << "Number is less than your answer!" << endl;
        }
        else
        {
          cout << "Number is higher than your answer!" << endl;
        }

    }
    else if(isdigit(guessNumber) || (guessNumber < 0))
    {
        cout << "Invalid answer.(String or Negative Number)" << endl;

    }
    else
    {
        cout << "Congratulation!!!" << endl;
        break;
    }
    cout << "Guess Again:";
    cin >> guessNumber;
        
  }
  return 0;
}