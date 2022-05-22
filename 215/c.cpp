#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void print(const std::vector<int>& v)
{
  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << " ";
  });
  std::cout << std::endl;
}

// int main ()
// {
//     string S;
//     int K;
//     cin >> S;
//     cin >> K;

//     std::vector<int> v = {1, 2, 3};

//     do {
//       print(v);
//     } while (std::next_permutation(v.begin(), v.end()));
// }