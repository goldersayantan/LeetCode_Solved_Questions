class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((str1 + str2) != (str2 + str1))  {
            return "";
        }
        
        int str1_length = str1.length();
        int str2_length = str2.length();
        int temp;

        while(str2_length != 0) {
            temp = str2_length;
            str2_length = str1_length % str2_length;
            str1_length = temp;
        }

        return str1.substr(0, str1_length);
    }
};