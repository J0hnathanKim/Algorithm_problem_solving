Number Card Game

The number card game is a game where, among several cards containing numbers, the player must pick one card with the highest possible number. However, there is a rule that must be followed when selecting the card, which is described as follows:

The cards containing numbers are placed in an N × M grid, where N represents the number of rows and M represents the number of columns.

First, choose a row that contains the card you want to pick.

Next, from the chosen row, you must pick the card with the smallest number among that row’s cards.

Therefore, when choosing which row to select from, you should consider which row’s minimum card allows you to ultimately pick the largest possible number card.

For example, suppose the cards are arranged in a 3 × 3 grid as follows:

3   1   2

4   1   4

2   2   2


If you choose the first row, the minimum card value is 1.
If you choose the second row, the minimum card value is also 1.
If you choose the third row, the minimum card value is 2.
Therefore, the optimal choice is to select the third row, where the card chosen is 2.

Thus, given a grid of N × M cards, write a program that determines the maximum card value you can obtain by following the game’s rules.
