#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:    
   string Name;
   string OwnerName;
   int subscribersCount;
   list<string> PublishedVideoTitles;

public:
   YoutubeChannel(string name, string ownerName){
       Name = name;
       OwnerName = ownerName;
       subscribersCount = 0;
   }
   void GetInfo(){
       cout << "Name: " << Name << endl;
       cout << "OwnerName: " << OwnerName << endl;
       cout << "subscribersCount: " << subscribersCount << endl;
       cout << "Videos: " <<endl;
       for (string videoTitle : PublishedVideoTitles){
          cout << videoTitle << endl;
      }

   }
   void Suscribe(){
       subscribersCount ++;
   }
   void Unsuscribe(){
       if(subscribersCount > 0)
       subscribersCount --;
   }
   
   void PublishedVideo(string title){
       PublishedVideoTitles.push_back(title);
   }
};

int main()
{
    YoutubeChannel ytChannel("UECC","Faouzia");
    ytChannel.PublishedVideo("C++ for begginners");
    ytChannel.PublishedVideo("HTML for begginners");
    ytChannel.PublishedVideo("C++ OOP");
    ytChannel.Suscribe();
    ytChannel.Unsuscribe();
    ytChannel.GetInfo();
  
    system("pause > 0");
}