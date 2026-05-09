/* This program will display the average score 
while dropping the highest and lowest scores 
from the set of 5 scores. Then average
score will be calculated*/

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
double getScore ()
bool isLower (double value 1, double value 2);
bool isHigher (double value 1, double value 2);

double average ( double total, double scoreHigh,
                 double scoreLow);

/* the main controls the flow of the program by
collecting scores, calculating total, tets the
average function, then displays results */
int main ()
{
    // variables are declared first.
    double score;
    double total = 0.0;
    double scoreHigh ;
    double scoreLow;
    double finalAverage;

    //gets score for input
      score = getScore();
      {
        double score;
        cout << "Enter Score: ";
        cin>> score ;
        
       while ( score <0 || score > 10)
       {
        cout<< "Error. enter a number between 0 and 10 : ";
        cin >> score;
       }
       return score;
      }
      // tracking the lower score of the 5
      bool isLower (double value1, double value2)
      {
        return value1 <= value2;
      }
      // tracking higest score of the 5
      bool isHigher (double value1, double value2)
      {
        return value1 >= value2 ;
      }
        //formatting the output
        cout << fixed << setprecision(2);
        cout << "Final Score : "
        << finalAverage << endl;

    return 0;
}
/* calculating average of the scores. 
      calulating with out the highest and lowest
      scores */
      double calcAverage (double total, double scoreHigh,
                          double scoreLow)
        {
            return (total - scoreLow - scoreHigh) / 3.0;
        }