class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> words;
        
        while(ss >> tmp) words.push_back(tmp);
        
        s = "";
        for(int i=words.size()-1; i>=0; i--){
            s += words[i];
            if(i!=0) s += " ";
        }
        
        return s;
    }
};