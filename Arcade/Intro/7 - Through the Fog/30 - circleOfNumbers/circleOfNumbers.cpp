int circleOfNumbers(int n, int firstNumber) {
    int oppositeOfZero = (int)(n/2);
    int oppositeOfNum = oppositeOfZero + firstNumber;
    return ( (oppositeOfNum)%n ); //opposite number can't be higher than the total amount of numbers
}
