class State {
public:
    int row;
    int col;
    int mask;
    int energy;
    int moves;

    State(int row, int col, int mask, int energy, int moves) {
        this->row = row;
        this->col = col;
        this->mask = mask;
        this->energy = energy;
        this->moves = moves;
    }
};

class Pair {
public:
    int row;
    int col;

    Pair(int row, int col) {
        this->row = row;
        this->col = col;
    }
};

class Solution {
public:
    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    int minMoves(vector<string>& classroom, int energy) {

        int sr = 0, sc = 0;

        int m = classroom.size();
        int n = classroom[0].size();

        vector<Pair> litter;

        // Find starting position and all litter positions
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }
                else if (classroom[i][j] == 'L') {
                    litter.push_back(Pair(i, j));
                }
            }
        }

        int size = litter.size();

        int fullMask = (1 << size) - 1;

        // best[row][col][mask] = maximum energy
        // with which we have reached this state
        vector<vector<vector<int>>> best(
            m,
            vector<vector<int>>(n, vector<int>(1 << size, -1))
        );

        queue<State> q;

        q.push(State(sr, sc, 0, energy, 0));

        best[sr][sc][0] = energy;

        while (!q.empty()) {

            State curr = q.front();
            q.pop();

            int cr = curr.row;
            int cc = curr.col;
            int cmask = curr.mask;
            int cenergy = curr.energy;
            int cmoves = curr.moves;

            // All litter collected
            if (cmask == fullMask) {
                return cmoves;
            }

            // No energy left
            if (cenergy == 0) {
                continue;
            }

            // Try all 4 directions
            for (int i = 0; i < 4; i++) {

                int nr = cr + dr[i];
                int nc = cc + dc[i];

                // Check boundaries and obstacle
                if (nr >= 0 && nr < m &&
                    nc >= 0 && nc < n &&
                    classroom[nr][nc] != 'X') {

                    int newEne = cenergy - 1;
                    int newMask = cmask;

                    // Recharge
                    if (classroom[nr][nc] == 'R') {
                        newEne = energy;
                    }

                    // Collect litter
                    else if (classroom[nr][nc] == 'L') {

                        for (int j = 0; j < size; j++) {

                            if (litter[j].row == nr &&
                                litter[j].col == nc) {

                                newMask |= (1 << j);
                                break;
                            }
                        }
                    }

                    // Visit only if this state has better energy
                    if (newEne > best[nr][nc][newMask]) {

                        best[nr][nc][newMask] = newEne;

                        q.push(
                            State(
                                nr,
                                nc,
                                newMask,
                                newEne,
                                cmoves + 1
                            )
                        );
                    }
                }
            }
        }

        return -1;
    }
};