class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        char tail;
        for(char &c : s) // taking and so that it should not create a copy 
        {
            switch (c)
            {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    // If previos character is less then it will be 3 and if not then 
                    // it will 5, similarly for below cases
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