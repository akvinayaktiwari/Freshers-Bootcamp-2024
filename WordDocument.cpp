#include <bits/stdc++.h>
using namespace std;

class WordDocument{
    private :
    vector<*DocumentPart> documentParts;
    void open(){
        return;
    }
    void save(){
        return;
    }
};

class IConverter{
    public:
    virtual void convert(Header header)=0;
    virtual void convert(Footer footer)=0;
    virtual void convert(Paragraph para)=0;  
    virtual void convert(Hyperlink link)=0;  
};

class HtmlConverter : public IConverter{
    public:
    void convert(Header header){
        return;
    }
    void convert(Footer footer){
        return ;
    }
    void convert(Paragraph para){
        return;
    }
    void convert(Hyperlink link){
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
    virtual void convert(IConverter iConverter)=0;
}

class Header :public DocumentPart{
    private:
    HtmlConvert htmlConvert;
    string header;
    public:
    string title;
    void paint(){
        return;
    }
    void save(){
        return;
    }
    void Convert(){
        HtmlConverter::convert(this);
        return;
    }
    
};

class Footer :public DocumentPart{
    public:
    HtmlConvert htmlConvert;
    string text;
    void paint(){
        return;
    }
    void save(){
        return;
    }
    void Convert(){
        HtmlConverter::convert(this);
        return;
    }
};

class Hypertext :public DocumentPart{
    public:
    HtmlConvert htmlConvert;
    string orc;
    void paint(){
        return;
    }
    void save(){
        return;
    }
    void Convert(){
        HtmlConverter::convert(this);
        return;
    }
};

class Paragraph :public DocumentPart{
    public:
    HtmlConvert htmlConvert;
    string content;
    string lines;
    void paint(){
        return;
    }
    void save(){
        return;
    }
    void Convert(){
        HtmlConverter::convert(this);
        return;
    }
};

int main() {
    
    

    return 0;
}
