#include <iostream>

using namespace std;

int main()
{
    string sentence;
    cout<<"Enter a Sentence:";
    getline (cin , sentence);
    if( (sentence[0]=='i' || sentence[0]=='I') && (sentence[1]=='f' || sentence[1]=='F') ){
        string sub_sentence=sentence.substr(3);
        cout<<sub_sentence;
    }
    else {
        cout<<"If "<<sentence;
    }
}
