// deque::shrink_to_fit
#include <iostream>
#include <deque>

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
  std::deque<int> mydeque (100);
  std::cout << "1.a size of mydeque: " << mydeque.size() << '\n';
  std::cout << "1.b max_size of mydeque: " << mydeque.max_size() << '\n';

  mydeque.resize(10);
  std::cout << "2.a size of mydeque: " << mydeque.size() << '\n';
  std::cout << "2.b max_size of mydeque: " << mydeque.max_size() << '\n';

  mydeque.shrink_to_fit();
  std::cout << "3.a size of mydeque: " << mydeque.size() << '\n';
  std::cout << "3.b max_size of mydeque: " << mydeque.max_size() << '\n';
  return 0;
}