int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    
    bool allowedToTakeBoth = weight1 + weight2 <= maxW;
    bool bothAreLighterThanMax = weight1 <= maxW && weight2 <= maxW;
    bool onlyItem2IsLighterThanMax = weight1 > maxW && weight2 <= maxW;
    bool onlyItem1IsLighterThanMax = weight2 > maxW && weight1 <= maxW;
    
    if( allowedToTakeBoth ) return value1+value2;
    else if( bothAreLighterThanMax ) return max(value1, value2);
    else if( onlyItem2IsLighterThanMax ) return value2;
    else if( onlyItem1IsLighterThanMax ) return value1;
    
    return 0;
}