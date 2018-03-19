int electionsWinners(std::vector<int> votes, int k) {
    
    int remainingVotes = k; //that fuck is a "k"? ¬¬
    int maxElement = *std::max_element(votes.begin(), votes.end());
    
    //two distinct situations, the first there are voters who haven't cast their vote (remainingVotes > 0), 
    //and the second is the opposite, there is no more voters (remainingVotes = 0) 
    if(remainingVotes) {
        //varible to count the amount of possible winners.... hehehe winners... :D
        int winners = 0;

        int currentCandidateVotes;
        int bestScenarioForCurrentCandidate;
        bool currentCandidateCanWin;
        
        for(int i = 0; i < votes.size(); i++) {
            currentCandidateVotes = votes.at(i);
            bestScenarioForCurrentCandidate = currentCandidateVotes + remainingVotes;
            currentCandidateCanWin = currentCandidateVotes+remainingVotes > maxElement;
            
            if(currentCandidateCanWin) winners++;
        }
        
        return winners;
    }
    else { //is this situation remainingVotes = 0
        
        int amountOfPossibleWinners = std::count(votes.begin(), votes.end(), maxElement);
    
        //there is no winners in the case the biggest number shows more than one time
        bool moreThanOneWinner = amountOfPossibleWinners > 1;
        if(moreThanOneWinner)
            return 0;
        
        //one candidate have more votes than all others
        return 1;
    }
}