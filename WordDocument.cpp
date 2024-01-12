#include <bits/stdc++.h>
using namespace std;

class WordDocument{
    private :
    vector<DocumentPart*> documentParts;
    void open(){
        return;
    }
    void save(){
        return;
    }
};

class DocumentPart{
    private:
    string name;
    string position;
    public:
    virtual void save()=0;
    virtual void paint()=0;
}

class Header :public DocumentPart{
    public:
    string title;
    void paint(){
        return;
    }
    void save(){
        return;
    }
};

class Footer :public DocumentPart{
    public:
    string text;
    void paint(){
        return;
    }
    void save(){
        return;
    }
};

class Hypertext :public DocumentPart{
    public:
    string orc;
    void paint(){
        return;
    }
    void save(){
        return;
    }
};

class Paragraph :public DocumentPart{
    public:
    string content;
    string lines;
    void paint(){
        return;
    }
    void save(){
        return;
    }
};

int main() {
    
    

    return 0;
}
