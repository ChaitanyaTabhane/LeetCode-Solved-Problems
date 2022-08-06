class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        char tail;
        for(char &c : s)
        {
            switch (c)
            {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    (tail == 'I') ? sum += 3 : sum += 5;
                    break;
                case 'X':
                    (tail == 'I') ? sum += 8 : sum += 10;
                    break;
                case 'L':
                    (tail == 'X') ? sum += 30 : sum += 50;
                    break;
                case 'C':
                    (tail == 'X') ? sum += 80 : sum += 100;
                    break;
                case 'D':
                    (tail == 'C') ? sum += 300 : sum += 500;
                    break;
                case 'M':
                    (tail == 'C') ? sum += 800 : sum += 1000;
                    break;
            }
            tail = c;
        }
        return sum;
    }
};