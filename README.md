# twenty_questions

In the game 20 questions the player begins by thinking of an object. The computers goal is to successfully guess what that object is. The computer will ask the player a set of 20 questions (or less), attempting to narrow down the list of possible results until it finally thinks it knows the answer. It will then present the result to the player. If the computer successfully guesses the object it wins, otherwise it loses.

The 'knowledge' the computer stores about the world can be represented as a binary tree. Each non-leaf node stores a question that helps the computer narrow down the space of possible answers, while each leaf node stores the computer guess.
