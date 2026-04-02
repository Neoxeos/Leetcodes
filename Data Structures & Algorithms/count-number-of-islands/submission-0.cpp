class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int num = 0;
        vector<pair<int,int>> visited;
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                queue<pair<int,int>> frontier;
                pair<int,int> toCheck(row,col);
                cout << grid[row][col] << endl;
                if (grid[row][col] == '1' && count(visited.begin(), visited.end(), toCheck) == 0)
                {
                    // new island found
                    num++;
                    frontier.push({row,col});
                    visited.push_back({row,col});
                }


                while (!frontier.empty())
                {
                    // generate all 1's attached to island and add to visited 
                    int r = frontier.front().first;
                    int c = frontier.front().second;
                    frontier.pop();

                    if ((r + 1) < grid.size() && grid[r+1][c] == '1' && count(visited.begin(), visited.end(), make_pair(r+1,c)) == 0)
                    {
                        frontier.push({r+1,c});
                        visited.push_back({r+1,c});
                    }

                    if ((r - 1) >= 0 && grid[r-1][c] == '1' && count(visited.begin(), visited.end(), make_pair(r-1,c)) == 0)
                    {
                        frontier.push({r-1,c});
                        visited.push_back({r-1,c});
                    }

                    if ((c + 1) < grid[0].size() && grid[r][c+1] == '1' && count(visited.begin(), visited.end(), make_pair(r,c+1)) == 0)
                    {
                        frontier.push({r,c+1});
                        visited.push_back({r,c+1});
                    }

                    if ((c - 1) >= 0 && grid[r][c-1] == '1' && count(visited.begin(), visited.end(), make_pair(r,c-1)) == 0)
                    {
                        frontier.push({r,c-1});
                        visited.push_back({r,c-1});
                    }
                }
            }
        }

        return num;
    }
};
