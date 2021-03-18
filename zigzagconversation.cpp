class Solution {
public:
string convert(string s, intnumRows) {
if (numRows == 1) return s;

vector<string> rows(min(numRows, int(s.size())));
intcurRow = 0;
boolgoingDown = false;

for (char c : s) {
rows[curRow] += c;
if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
curRow += goingDown ? 1 : -1;
        }

string ret;
for (string row : rows) ret += row;
return ret;

    }
};

