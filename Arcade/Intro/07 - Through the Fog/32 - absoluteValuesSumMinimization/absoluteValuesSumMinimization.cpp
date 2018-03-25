/*
This works, but seens like cheat.
int absoluteValuesSumMinimization(std::vector<int> a) {
    return a[(a.size()-1)/2];
}
*/

int absoluteValuesSumMinimization(std::vector<int> a) {

    int sum;
    vector<int> possibleResults;
    
    possibleResults = getPossibleResults(a);
    
    int smallestValueIndex = getIndexSmallestValue(&possibleResults);
    int smallestValue = a.at(smallestValueIndex);
    
    return smallestValue;
}

//*****************************************
//
//                 Logic
//
//*****************************************

//return the abs of the subtraction from the elements of the vector
vector<int> getPossibleResults(vector<int> numbers) {
    vector<int> possibleResults;
    int sum;
    
    for(auto&& firstValue : numbers) {
        sum = 0;
        for(auto&& secondValue : numbers) {
            sum += abs(firstValue - secondValue);
        }
        possibleResults.push_back(sum);
    }
    
    return possibleResults;
}

//return the index of the smallest value for the sum
int getIndexSmallestValue(vector<int>* possibleResults) {
    int minNumFromResults = *std::min_element(possibleResults->begin(), possibleResults->end());
    auto iterator_minNumFromResults = std::find(possibleResults->begin(), possibleResults->end(), minNumFromResults);
    int index_minNumFromResults = std::distance(possibleResults->begin(), iterator_minNumFromResults);
    
    return index_minNumFromResults;
}

/**************************************/
//test
void showSet(set<int> mySet) {
    for(auto&& value : mySet) {
        cout << value << " " << endl;
    }
}

void showVector(vector<int> myVector) {
    for(auto&& value : myVector) {
        cout << value << " " << endl;
    }
}

