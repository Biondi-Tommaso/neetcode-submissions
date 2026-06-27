class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty())
            return "";
        string out = "";
        string aux = "";
        for (string str : strs){
            out += to_string(str.length());
            out += ',';
            aux += str;
        }
        out+='#';
        out += aux;
        cout << out;
        return out;
    }

    vector<string> decode(string s) {
        if(s.empty()){
            return vector<string> {};
        }
        int i = 0;
        vector<int> length;
        int size = 0;
        while(s[i]!='#') {
            
            if(s[i]==','){                
                length.push_back(size);
                size = 0;
            }
            else{
                size *= 10;
                size += (s[i]-'0');
            }
            i++;
        }
        cout << length[0];
        i++;
        vector<string> out;
        string aux = "";
        for (int l : length){
            for (int j = 0; j < l; j++){
                aux += s[i];
                i++;
            }
            out.push_back(aux);
            aux="";
        }
        return out;

        

    }
};
