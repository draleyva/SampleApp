//#define EXTENDED

#include "SampleApp.h"



int32_t decksOfCards(vector<string>& A)
{
  map<string, int32_t> cardmap;

  // map counting repeared cards
  for (auto x : A)
    cardmap[x]++;

  int32_t deck[4]{};
  int64_t numbers[4]{};
  char* card;

  for (auto x : cardmap)
  {
    card = (char*)x.first.c_str();
    //cout << x.first << endl;
    switch (card[1])
    {
    case 'S':
      deck[0]++;
      numbers[0] += card[0];
    case 'C':
      deck[1]++;
      numbers[1] += card[0];
    case 'H':
      deck[2]++;
      numbers[2] += card[0];
    case 'D':
      deck[3]++;
      numbers[3] += card[0];
    }
  }



  return -1;
}

int32_t main(int32_t argn, char* args[])
{
  std::cout << "SampleApp\n";

  vector<string> cards({ "9C", "KS", "AC", "AH", "8D", "4C", "KD", "JC", "7D", "9D", "2H", "7C", "3C", "7S", "5C", "6H", "TH" });

  decksOfCards(cards);

  return 0;
}
