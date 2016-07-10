#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stdio.h>


using namespace std;

/*
 * Complete the function below.
 */

void deleteElements() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    int n;
    char c;
    vector<int> nums;
    while(ss >> n) {
        nums.push_back(n);
        cout << n;
        ss >> c;
    }
    cout << endl << nums.size() << endl;

    int i, j;
    cin >> i;
    cin >> j;

    for(n = 0; n < nums.size(); n++){
        cout << nums[n];
    }
    cout << endl << i << endl << j << endl;
    for(n = i; n < nums.size(); ) {
        nums.erase(nums.begin() + n, nums.begin() + n + j);
        n += i;
    }

    for(n = 0; n < nums.size(); n++) {
        cout << nums[n];
        if(n+1 < nums.size()){
            cout << ",";
        }
    }

}

/*
 * Complete the function below.
 */
/*
void deleteElements() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    int n;
    char c;
    vector<int> nums;
    while(ss >> n) {
        nums.push_back(n);
        ss >> c;
    }

    int i, j;
    cin >> i;
    cin >> j;

    for(n = i; n < nums.size(); n++) {
        nums.erase(nums.begin() + n, nums.begin() + n + j);
        n += i;
    }

    for(n = 0; n < nums.size(); n++) {
        cout << nums[n];
        if(n+1 < nums.size()){
            cout << ",";
        }
    }

}
*/



int main()
{
    cout << "Hello world!" << endl;
    deleteElements();
    return 0;
}
