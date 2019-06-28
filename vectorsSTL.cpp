#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> lotto(int maxSpots, int numSpots);
  // function to create (maxSpots) numbers and to chose (numSpots) out of all the numbers created for the winning numbers in lottery
  // postCondition: vector<int> object is returned that contains the numbers selected at random in sorted order


int main()
{
  const int numRange = 51;    // want to create numbers 1-51
  const int numWin = 6;       // select 6 numbers randomly
  vector<int> winners;        // vector to contain the winning numbers


  winners = lotto(numRange, numWin);

  cout << endl;
  cout << "Using STL vectors to chose winning numbers in a lottery" << endl << endl;

  cout << "The Winning Numbers" << endl;

  for (int i = 0; i < winners.size(); i++)
  {
    cout << winners[i] << " ";
  }

  cout << endl;

  return 0;
}


vector<int> lotto(int maxSpots, int numSpots)
{
  vector<int> winners;    // vector to contain winning numbers
  vector<int> numbers;    // vector to contain numbers in random order

  for (int i = 1; i <= maxSpots; i++)
  {
    numbers.push_back(i);
      // inserts the possible numbers into vector
  }

  random_shuffle(numbers.begin(), numbers.end());
    // STL function to shuffle the numbers randomly in the vector


  for (int i = 0; i < numSpots; i++)
  {
    winners.push_back(numbers[i]);
      // inserts the winning numebrs into vector
  }

  sort(winners.begin(), winners.end());
    // STL function to sort the numbers inside the vector lowest to highest


  return winners;
}


// template <class RandomAccessIterator>
// void random_shuffle (RandomAccessIterator first, RandomAccessIterator last);

    // ct.begin() - returns an iterator to the first element into container ct
    // ct.end() - returns an iterator to the position after the last element into container ct


//  template <class RandomAccessIterator>
//  void sort (RandomAccessIterator first, RandomAccessIterator last);

    // ct.begin() - returns an iterator to the first element into container ct
    // ct.end() - returns an iterator to the position after the last element into container ct
