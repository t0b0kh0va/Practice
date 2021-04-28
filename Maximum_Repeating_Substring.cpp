class Solution {
public:
    int maxRepeating(string sequence, string word){
        string x = word;
        int res = 0;
        while(sequence.find(x) != string::npos){
            x += word;
            res++;
        }
        return res;
	}
};
