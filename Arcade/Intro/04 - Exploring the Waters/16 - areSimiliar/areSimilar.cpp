bool areSimilar(std::vector<int> a, std::vector<int> b) {

    bool exceededMaxChanges = false;
    int swappingCount = 0;
    //saves the last elements that was different in a comparison
    int lastDifferentValueFromA = -1;
    int lastDifferentValueFromB = -1;

    for(int index = 0; index < a.size(); index++)
    {
        bool elementsAreDifferent = a[index] != b[index];
        if(elementsAreDifferent)
        {
            bool neverChangedA = lastDifferentValueFromA == -1;
            bool neverChangedB = lastDifferentValueFromB == -1;
            bool tooMuchChange = b[index] != lastDifferentValueFromA || a[index] != lastDifferentValueFromB;
            
            if(neverChangedA) lastDifferentValueFromA = a[index];
            else if(tooMuchChange) return false;
            
            if(neverChangedB) lastDifferentValueFromB = b[index];
            else if(tooMuchChange) return false;

            swappingCount++;
        }
        
        exceededMaxChanges = swappingCount > 2;
        if(exceededMaxChanges) break;
    }
    
    if(exceededMaxChanges) return false;
    return true;
}
