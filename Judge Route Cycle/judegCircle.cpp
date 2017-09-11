class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0, left = 0, i = 0, len = moves.length();
        for(; i<len; i++)
        {
            switch(moves[i])
            {
                case 'L':
                    ++left;break;
                case 'R':
                    --left;break;
                case 'U':
                    ++up;break;
                case 'D':
                    --up;break;
                default:
                    break;
            }
        }
        return (!up)&&(!left);
    }
};