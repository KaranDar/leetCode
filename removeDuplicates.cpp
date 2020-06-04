#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& arr){
    int len = arr.size();

    if(len == 0 || len == 1){
        return len;
    }

    int j=0;
    for(int i=0; i<len-1; i++){
        if(arr.at(i) != arr.at(i+1)){
            arr.at(j) = arr.at(i);
            j++;
        }
    }

    arr[j]=arr[len-1];
    return j+1;
}

void printVector(vector<int>& a) {
   cout << "The vector elements are : ";
   for(int i=0; i < a.size(); i++)
    cout << a.at(i) << ' ';
   cout << endl;
}

int main(){
    cout << endl;
    
    vector<int> numsArray;
    numsArray.push_back(1);  numsArray.push_back(1); 
    numsArray.push_back(4);  numsArray.push_back(4);
    numsArray.push_back(8);
    numsArray.push_back(10);
    numsArray.push_back(13); numsArray.push_back(13);
    numsArray.push_back(15);

    printVector(numsArray);
    cout << "Length after removing duplicates is " << removeDuplicates(numsArray) << endl;
    cout << "Vector after removing duplicates is " << endl;
    printVector(numsArray);

    cout << endl << endl << endl;
    
    vector<int> numbersArray = {1,1,2,2,3,4,5,6,7,7,8,9,10};
    printVector(numbersArray);
    cout << "Length after removing duplicates is " << removeDuplicates(numbersArray) << endl;
    cout << "Vector after removing duplicates is " << endl;
    printVector(numbersArray);

    return 0;
}