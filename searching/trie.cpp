#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    bool is_end;
    vector<Node *> next;

    Node(){
        is_end = false;
        next = vector<Node *>(26,nullptr);
    }
};

class Trie{
    Node *head;
    public:
    Trie(){
        head = new Node();
    }

    void insert(string word){
        Node *q = head;
        for(char c: word){
            if(q->next[c-'a'] == nullptr){
                q->next[c-'a'] = new Node();
            }
            q = q->next[c-'a'];
        }
        q->is_end = true;
    }

    bool is_present(string word){
        Node *q = head;

        for(char c: word){
            if(q->next[c-'a'] == nullptr){
                return false;
            }
            q = q->next[c-'a'];
        }

        return q->is_end;
    }
};

int main(){
    vector<string> words = {"kartavya", "karthik","arun kumar", "arun sharma","arjun","mangesh","mango","manish"};
    Trie trie;

    for(auto word: words){
        trie.insert(word);
    }

    string w;
    getline(cin,w);

    cout<<w<<" is "<<(trie.is_present(w)?"":"not ")<<"present"<<endl;

    return 0;
}