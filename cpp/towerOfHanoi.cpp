/*
 * Tower of Hanoi problem: 
 * Move 'n' disks from source peg to destination peg using an auxiliary peg.
 * 
 * The rules are:
 * 1. Only one disk can be moved at a time.
 * 2. A disk can only be placed on top of a larger disk.
 * 3. The goal is to move all disks from the source peg to the destination peg.
 *
 * This implementation uses recursion to solve the problem.
 */

#include <iostream>

using namespace std;

/**
 * Recursive function to solve Tower of Hanoi problem.
 *
 * @param n       Number of disks to move.
 * @param source  The peg from where disks are moved initially.
 * @param destination The peg where disks need to be moved.
 * @param auxiliary   The peg used as an auxiliary in the process.
 */
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If only one disk, move it from source to destination.
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move (n-1) disks from source to auxiliary peg using destination as auxiliary.
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination.
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move (n-1) disks from auxiliary to destination using source as auxiliary.
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks;

    // Get the number of disks from the user.
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    // Call the recursive function to solve Tower of Hanoi puzzle.
    towerOfHanoi(numDisks, 'A', 'C', 'B'); // 'A' is source, 'C' is destination, 'B' is auxiliary

    return 0;
}