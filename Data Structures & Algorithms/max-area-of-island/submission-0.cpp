class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxSurface = 0;
        vector<pair<int,int>> visited;

        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                int curSurface = 0;
                queue<pair<int,int>> frontier;
                pair<int,int> toCheck(row,col);

                if (grid[row][col] == 1 && count(visited.begin(), visited.end(), toCheck) == 0)
                {
                    curSurface++;
                    frontier.push(toCheck);
                    visited.push_back(toCheck);
                }

                while (!frontier.empty())
                {
                    pair<int,int> node = frontier.front();
                    frontier.pop();
                    int r = node.first;
                    int c = node.second;

                    if ((c+1) < grid[r].size() && grid[r][c+1] == 1 && count(visited.begin(), visited.end(), make_pair(r, c+1)) == 0)
                    {
                        frontier.push(make_pair(r,c+1));
                        curSurface++;
                        visited.push_back(make_pair(r, c+1));
                    }

                    if ((r+1) < grid.size() && grid[r+1][c] == 1 && count(visited.begin(), visited.end(), make_pair(r+1, c)) == 0)
                    {
                        frontier.push(make_pair(r+1,c));
                        curSurface++;
                        visited.push_back(make_pair(r+1, c));
                    }

                    if ((c-1) >= 0 && grid[r][c-1] == 1 && count(visited.begin(), visited.end(), make_pair(r, c-1)) == 0)
                    {
                        frontier.push(make_pair(r,c-1));
                        curSurface++;
                        visited.push_back(make_pair(r, c-1));
                    }

                    if ((r-1) >= 0 && grid[r-1][c] == 1 && count(visited.begin(), visited.end(), make_pair(r-1, c)) == 0)
                    {
                        frontier.push(make_pair(r-1,c));
                        curSurface++;
                        visited.push_back(make_pair(r-1, c));
                    }
                }

                if (curSurface > maxSurface) {maxSurface = curSurface;}
            }
        }

        return maxSurface;
    }
};
