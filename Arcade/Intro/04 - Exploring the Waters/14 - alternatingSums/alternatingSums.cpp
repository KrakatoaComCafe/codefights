std::vector<int> alternatingSums(std::vector<int> a) {

    //initiate a vector size 2 with valor 0 in both positions
    std::vector<int> total (2,0);
    
    for(int index = 0; index < a.size(); index++) 
    {
        bool numberIsEven = index % 2 == 0;
        if(numberIsEven)
        {
            total[0] += a[index];
        }
        else
        {
            total[1] += a[index];
        }
    }
    
    return total;
}
