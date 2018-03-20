std::string reverseParentheses(std::string s) {

    int begin = -1;
    int end = -1;
    
    searchTheInnermostParentheses(&s, &begin, &end);
    
    bool thereIsNoParentheses = begin == -1 && end == -1;
    if(thereIsNoParentheses)
        return s;
    
    //breaks the parentheses and reverse the string that was inside
    s = amazingReverser(s, begin, end);
    
    //do another check
    return reverseParentheses(s);
}

//********************************
//
//           Logic
//
//********************************

//goes through the string to find the innermost pair of parentheses
void searchTheInnermostParentheses(std::string* str, int* begin, int* end) {
    for(int index = 0; index < str->length(); index++) 
    {
        char currentChar = str->at(index);
        
        //save their postions in the string
        if(currentChar == '(') *begin = index;
        if(currentChar == ')') {
            *end = index;
            break;
        }
    }
}

//breaks the parentheses and reverse the string that was inside
std::string amazingReverser(std::string s, int begin, int end)
{
    //remove the parentheses
    s.erase(s.begin()+end);
    s.erase(s.begin()+begin);
    
    //update the position of the last char
    end -= 2;
    
    //change the string order
    char aux;
    while( begin < end )
    {
        aux = s.at(begin);
        s.at(begin) = s.at(end);
        s.at(end) = aux;
        begin++;
        end--;
    }
    
    return s;
}