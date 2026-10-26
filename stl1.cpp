
#include <iostream>//vector
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {0, 1, 0, 3, 12};
    int key = 0;
    int count = 0;
    for(int i=0;i<v.size();i++){
        
            
                  
                for(int j=i;j<v.size();j++){
                    
                      int temp=v[i];
                        v[i]=v[j];
                        v[j]=temp;
                        break;
                    
               
            }
             cout<<v[i]<<" ";
        }
        
        
      
    

    
    
   
    // auto max_it = max_element(v.begin(), v.end()-1);
    // cout << "The second maximum element is: " << *max_it << endl;
// cout << "The second maximum element is: "
//      << v[v.size() - 2] << endl;
    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = i + 1; j < v.size(); j++) {
    //         if (v[i] == v[j]) {
    //             v.erase(v.begin() + j);
    //             j--;
    //         }
    //     }
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // cout << "The sorted vector is:" << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = i + 1; j < v.size(); j++) {
    //         if (v[i] > v[j]) {
    //             swap(v[i], v[j]);
    //         }
    //     }
    // }

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // vector<int> v2(v.begin(), v.end());

    // for (int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << endl;
    // }

    // int key = 8;
    // int sum = 0;

    // v = {1, 2, 4, 7, 8, 9};

    // v.insert(v.begin() + 1, 5);
    // v[0] = 10;

    // cout << v[0] << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    // v.pop_back();

    // for (int i = 0; i < v.size(); i++) {
    //     v.pop_back();
    // }

    // cout << "The size of the vector is " << v.size() << endl;

    // v.empty();

    // cout << "The sum of the vector is " << sum << endl;

    // float avg = sum / (float)v.size();
    // cout << "The average of the vector is " << avg << endl;

    // for (auto it = v.rbegin(); it != v.rend(); it++) {
    //     cout << *it << ",";
    // }

    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] == key) {
    //         cout << "The key is found at index " << i << endl;
    //         cout << "The key is " << key << endl;
    //         break;
    //     } else {
    //         cout << "The key is not found at index " << i << endl;
    //     }
    // }

    // cout << "Even numbers are:" << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] % 2 == 0) {
    //         cout << v[i] << endl;
    //     }
    // }

    // cout << "Odd numbers are:" << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] % 2 != 0) {
    //         cout << v[i] << endl;
    //     }
    // }

    // cout << "The maximum number is "
    //      << *max_element(v.begin(), v.end()) << endl;

    // cout << "The minimum number is "
    //      << *min_element(v.begin(), v.end()) << endl;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // cout << v[1] + v[2] << endl;
    // cout << v.size() << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    // cout << v.back() << endl;

    // v.pop_back();

    // cout << v.back() << endl;

    // for (auto it = v.begin(); it != v.end(); it++) {
    //     cout << *it << endl;
    // }

    // vector<int>::reverse_iterator it = v.rend();
    // it = it - 2;

    // cout << *it << endl;

    // v = {10, 20, 30, 40, 50};

    // cout << "The size of the vector is " << v.size() << endl;
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;

    return 0;
}
