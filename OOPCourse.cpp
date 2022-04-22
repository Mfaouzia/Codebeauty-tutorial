#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
public:    
   string Name;
   string OwnerName;
   int subscribersCount;
   list<string> PublishedVideoTitles;

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

};

int main()
{
    YoutubeChannel ytChannel("UECC","Faouzia");
    ytChannel.PublishedVideoTitles.push_back("C++ for begginners");
    ytChannel.PublishedVideoTitles.push_back("HTML for begginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP for begginners");
   
    YoutubeChannel ytChannel2("Djomixdjo", "Djo");
    ytChannel2.PublishedVideoTitles.push_back("Beramu");
    ytChannel2.PublishedVideoTitles.push_back("Tsamba kamdja mwaliwona");
    ytChannel2.PublishedVideoTitles.push_back("Ninga");
     
    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    system("pause > 0");
}