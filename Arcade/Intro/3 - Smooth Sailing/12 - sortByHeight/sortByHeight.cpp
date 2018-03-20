std::vector<int> sortByHeight(std::vector<int> a) {

    std::vector<int> treePosition = getPositionsOfTrees(&a);
    
    sort(a.begin(), a.end());
    
    //remove all the tress (-1)
    for(int i = 0; i < treePosition.size(); i++)
        a.erase(a.begin());
    
    //put all the trees (-1) back to their original position
    for(int i = 0; i < treePosition.size(); i++)
        a.insert(a.begin() + treePosition[i], -1);
    
    return a;
}

//******************************************
//
//                  Logic
//
//******************************************

//saves the positions of the trees (-1 int the vector)
std::vector<int> getPositionsOfTrees(std::vector<int>* initialVector) {
    std::vector<int> treePosition;
    
    for(int index = 0; index < initialVector->size(); index++)
    {
        if((*initialVector)[index] == -1) treePosition.push_back(index);
    }
    
    return treePosition;
}

/***************************************/
//test
void showVector(std::vector<int> myVector) {
    for(auto&& number : myVector) {
        cout << number << " " ;
    }
}