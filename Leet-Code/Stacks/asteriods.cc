
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {

        for (int i = 0; i + 1 < ast.size(); ++i) {
            if (ast[i + 1] < 0) {
                if (ast[i] > std::abs(ast[i + 1])) {
                    ast.pop_back();
                } else if (ast[i] == std::abs(ast[i + 1])) {
                    ast.pop_back();
                    ast.pop_back();
                } else {
                    int x = ast[i + 1];
                    i = 0;
                    ast.pop_back();
                    ast.pop_back();
                    ast.push_back(x);
                }
            }
        }
        return ast;
    }
};

