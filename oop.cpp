#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
private:
    string Name;
    string Owner;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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

    void Subscribe() {
        SubscribersCount++;
    }
    
    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};

int main(){
    YouTubeChannel ytChannel("Code-Hub", "Albert");
    ytChannel.PublishVideo("C++ for beginners");
    YouTubeChannel ytChannel2("Hello-World!", "Piotr");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();

    ytChannel.GetInfo();

    ytChannel2.GetInfo();
}