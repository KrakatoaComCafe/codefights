int makeArrayConsecutive2(std::vector<int> statues) {

    int min = 9999;
    int max = -1;
    
    for(std::vector<int>::iterator it = statues.begin(); it != statues.end(); it++)
    {
        bool updateMin = *it < min;
        bool updateMax = *it > max;
        
        if(updateMax) max = *it;
        if(updateMin) min = *it;
    }
    
    int result = (max - min) - (statues.size()-1);
    
    return result;
}
