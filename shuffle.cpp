#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <cstdio>
using namespace std;

int main(void)
{
  vector<int> array;
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<> randASCII(32,126);

  while(true)
  {
    int randTmp;
    randTmp = randASCII(mt);
    if(find(array.begin(), array.end(), randTmp) == array.end())
    {
      array.push_back(randTmp);
      if(randTmp == 32)
      {
        puts("(空白)\n");
      }
      else
      {
        printf("%c\n",randTmp);
      }
      getchar();
    }
    else if(array.size() == 126 - 32 + 1)
    {
      puts("全ての文字を出力しました\n");
      break;
    }
  }
}
