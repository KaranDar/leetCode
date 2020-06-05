#include <iostream>
#include <vector>

using namespace std;

void print2dVector(vector<vector<int>>& input){
    for (int i = 0; i < input.size(); i++){
        for (int j = 0; j < input[i].size(); j++){
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}

void findCombinations(vector<int>& candidates, int index, int target, vector<int>& current, vector<vector<int>>& result){
    if(target == 0){
        result.push_back(current);
        return;
    }

    for(int i = index; i < candidates.size(); i++){
        if(candidates.at(i)<=target){
            current.push_back(candidates.at(i));
            findCombinations(candidates, i, target-candidates.at(i), current, result);
            current.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    
    if(candidates.size() == 0){
        return result;
    }
    
    vector<int> current;
    findCombinations(candidates, 0, target, current, result);

    return result;
}

int main(){
    vector<int> input = {2,3,5};
    vector<vector<int>> result = combinationSum(input, 7);
    print2dVector(result);

    cout << endl << endl;

    input = {5,8,12};
    result = combinationSum(input, 20);
    print2dVector(result);
    return 0;
}