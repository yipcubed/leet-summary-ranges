#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <set>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    // alternative is to sort and test numbers next to each other
    // set is easy, but wastes some space
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen;
        for (int i: nums) {
          if (seen.count(i)) {
            return true;
          } else {
            seen.insert(i);
          }
        }
        return false;
    }
};

void test1() {
  Solution S;
  cout << boolalpha;
  vector<int> v1{1,2,3,1};
  cout << "true? " << S.containsDuplicate(v1) << endl;

  vector<int> v2{1,2,3,4};
  cout << "false? " << S.containsDuplicate(v2) << endl;

  vector<int> v3{1,2,2,4};
  cout << "true? " << S.containsDuplicate(v3) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}