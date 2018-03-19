int depositProfit(int deposit, int rate, int threshold) {

    float money = (float)deposit;
    int years;
    
    for(years = 0; money < threshold; years++)
    {
        float percentage = (float)rate/100;
        money = money + (money*percentage);
    }
    
    return years;
}
