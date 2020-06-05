#include <iostream>
#include <vector>
#include <iterator> 
#include <map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    map<string, vector<string>> anagrams;
    for(int i=0; i < strs.size(); i++){
        string sortedWord = strs[i];
        std::sort(sortedWord.begin(), sortedWord.end());
        anagrams[sortedWord].push_back(strs[i]);   
    }
    vector<vector<string>> result;
    result.resize(anagrams.size(), {});
    int i = 0;
    for(auto ele:anagrams){
        for(auto word:ele.second){
            result[i].push_back(word);
        }
        i++;
    }
    return result;
}

void printVector(vector<string>& a) {
    cout << "Length of the vector is " << a.size() << endl;
    cout << "The vector elements are : ";
    for(int i=0; i < a.size(); i++)
        cout << a.at(i) << ' ';
    cout << endl;
}

void print2dVector(vector<vector<string>>& input){
    for (int i = 0; i < input.size(); i++){
        for (int j = 0; j < input[i].size(); j++){
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat", "tab"};
    printVector(input);

    vector<vector<string>> result = groupAnagrams(input);

    cout << endl << endl << "The result is:" << endl;
    print2dVector(result);
    
    return 0;
}