#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
public:
    string Name;
    string Owner;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName){
        Name = name;
        Owner = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo(){
      cout<<"Name: "<< Name<<endl;
        cout<<"Owner: "<< Owner<<endl;
        cout<<"Subs count: "<< SubscribersCount<<endl;
        cout<<"Videos"<<endl;
        for(string videoTitle: PublishedVideoTitles){
            cout<<videoTitle<<endl;
        }  
    }
};

int main(){
    YouTubeChannel ytChannel("Code-Hub", "Albert");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    YouTubeChannel ytChannel2("Hello-World!", "Piotr");

    ytChannel.GetInfo();

    ytChannel2.GetInfo();
}