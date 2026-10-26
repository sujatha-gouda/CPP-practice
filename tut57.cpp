#include <iostream>//runtime polymorphism
#include <string>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display()//virtual function
    {
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)//base class constructor called
    {
        videoLength = vl;
    }

    void display() override//overriding base class function
    {
        cout << "This is an amazing video with title "
             << title << endl;

        cout << "Ratings: "
             << rating << " out of 5 stars" << endl;

        cout << "Length of this video is: "
             << videoLength << " minutes" << endl;
        cout <<"    "<< endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }

    void display() override//overriding base class function
    {
        cout << "This is an amazing text tutorial with title "
             << title << endl;

        cout << "Ratings of this text tutorial: "
             << rating << " out of 5 stars" << endl;

        cout << "No of words in this text tutorial is: "
             << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);

    // For Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;

    CWHText djText(title, rating, words);

    // Base class pointers
    CWH* tuts[2];

    tuts[0] = &djVideo;
    tuts[1] = &djText;

    // Runtime polymorphism
    tuts[0]->display();

    tuts[1]->display();

    return 0;
}