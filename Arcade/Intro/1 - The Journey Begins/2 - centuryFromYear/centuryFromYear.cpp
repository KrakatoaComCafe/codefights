int centuryFromYear(int year) {

    int rest = year % 100;
    bool oldCentury = rest == 0;
    
    if(oldCentury) return year/100;
    return year/100 +1;
}
