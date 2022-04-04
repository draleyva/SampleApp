//#define EXTENDED

#include "SampleApp.h"

vector<string> test(vector<string>& A)
{
  sort(A.begin(), A.end());

  std::string text = "The bat is in the sky";

  std::istringstream myiss(text);
  vector<string> resultado(istream_iterator<string>{myiss}, istream_iterator<string>());

  return A;
}

int32_t main(int32_t argn, char *args[])
{
  std::cout << "SampleApp\n";

  vector<string> A;

  A.push_back("B");
  A.push_back("A");
  A.push_back("A");

  for (auto x : A)
    cout << x << endl;

  return 0;
}
