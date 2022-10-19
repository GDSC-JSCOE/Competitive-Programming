class Trie{
    // A data member of class type which stores a node of the trie
    class Node{
        char data ;
    public:
        unordered_map<char  , Node*> children ;
        bool terminal ;
        Node(char ch){
            data =  ch ;
            terminal =  false ;
        }
    };

    Node *root ;
    int cnt  ;

public:

    Trie(){
        cnt = 0;
        root =  new Node('\0') ;
    }
    // Inserts the given string into the trie.
    void insert(string &s){
        Node *temp =  root ;
        for(auto &ch : s){
            if(temp -> children.count(ch)){
                temp = temp -> children[ch] ;
            }
            else{
                // Create a new branch in the trie..
                Node *n = new Node(ch) ;
                temp -> children[ch] =  n ;
                temp = n ;
            }
        }
        temp -> terminal =  true  ;
    }
    // Return true/false wheather string is present in the trie or not...
    bool find(string &s){
        Node *temp = root ;
        for(auto &ch : s){
            if(temp -> children.count(ch)){
                temp = temp -> children[ch] ;
            }
            else{
                return false  ;
            }
        }
        
        return temp -> terminal ;
    }
};
