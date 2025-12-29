#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
      int m, n, oldColor, newColor;

      void dfs(vector<vector<int>>& image, int r, int c) {
        if(r<0 || c<0 || r>=m || c >=n) return;
        if(image[r][c] != oldColor) return ;

        dfs(image, r+1, c);
        dfs(image, r-1, c);
        dfs(image, r, c+1);
        dfs(image, r, c-1);
      }

      vector<vector<int>> FloodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        oldColor = image[sr][sc];
        newColor = color;

        if(oldColor == newColor) return image;

        dfs(image, sr, sc);
        return image;
      }
};
// time = 0(m*n)
//space = 0(m*n)