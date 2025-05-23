#include <string>
using namespace std;

class Solution {
    public:
        char prev = NULL;
        int processChar(char c){
            switch (c){
                case 'I':
                    return 1;
                case 'V':
                    if(prev == 'I'){
                        return 3;
                    }
                    return 5;
                case 'X':
                    if(prev == 'I'){
                        return 8;
                    }
                    return 10;
                case 'L':
                    if(prev == 'X'){
                        return 30;
                    }
                    return 50;
                case 'C':
                    if(prev == 'X'){
                        return 80;
                    }
                    return 100;
                case 'D':
                    if(prev == 'C'){
                        return 300;
                    }
                    return 500;
                case 'M':
                    if(prev == 'C'){
                        return 800;
                    }
                    return 1000;
            }
            return 0;
        }
        int romanToInt(string s) {
            int sum = 0;
            for(char i: s){
                sum = sum + processChar(i);
                prev = i;
            }
        return sum;
        }
    };