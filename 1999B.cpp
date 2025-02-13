#include <bits/stdc++.h>
using namespace std;

int countWins(int a1, int a2, int b1, int b2) {
    int wins = 0;

    // Simulate all 4 possible games
    int games[4][4] = {
        {a1, b1, a2, b2}, // Game 1
        {a1, b2, a2, b1}, // Game 2
        {a2, b1, a1, b2}, // Game 3
        {a2, b2, a1, b1}  // Game 4
    };

    for (int i = 0; i < 4; ++i) {
        int suneetWins = 0, slavicWins = 0;

        // Round 1
        if (games[i][0] > games[i][1]) suneetWins++;
        else if (games[i][0] < games[i][1]) slavicWins++;

        // Round 2
        if (games[i][2] > games[i][3]) suneetWins++;
        else if (games[i][2] < games[i][3]) slavicWins++;

        // Check if Suneet wins strictly more rounds
        if (suneetWins > slavicWins) wins++;
    }

    return wins;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        // Calculate and output Suneet's wins
        cout << countWins(a1, a2, b1, b2) << '\n';
    }

    return 0;
}
