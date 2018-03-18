String[] allLongestStrings(String[] inputArray) {

    int maxSequence = 0;
    ArrayList<String> preResult = new ArrayList<>();
    
    //goes through the array
    for(int i = 0; i < inputArray.length; i++)
    {
        //if a bigger length of string is found
        if(maxSequence < inputArray[i].length())
        {
            //new arrayList and update the size
            preResult = new ArrayList<>();
            maxSequence = inputArray[i].length();
        }
        if(maxSequence == inputArray[i].length())
        {
            //add the string
            preResult.add(inputArray[i]);
        }
    }
    
    //arrayList to array
    String[] result = new String[preResult.size()];
    result = preResult.toArray(result);
    
    return result;
}
