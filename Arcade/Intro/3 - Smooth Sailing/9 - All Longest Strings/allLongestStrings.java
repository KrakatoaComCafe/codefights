String[] allLongestStrings(String[] inputArray) {

    int maxSequence = 0;
    ArrayList<String> longestStrings = new ArrayList<>();
    
    for(int i = 0; i < inputArray.length; i++)
    {
        boolean foundBiggerString = maxSequence < inputArray[i].length();
        if(foundBiggerString)
        {
            //new arrayList and update the size
            longestStrings = new ArrayList<>();
            maxSequence = inputArray[i].length();
        }
        boolean stringHasSameLength = maxSequence == inputArray[i].length();
        if(stringHasSameLength)
        {
            longestStrings.add(inputArray[i]);
        }
    }
    
    //arrayList to array
    String[] result = new String[longestStrings.size()];
    result = longestStrings.toArray(result);
    
    return result;
}
