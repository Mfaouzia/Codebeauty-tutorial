#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:    
   string Name;
   string OwnerName;
   int subscribersCount;
   list<string> PublishedVideoTitles;
protected:
         string OwnerName;

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

class CookingYoutubeChannel: public YoutubeChannel{
public:
        CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

        }
        void Practice(){
            cout << OwnerName <<"Practing coooking, learning new recipes, experimenting with spices..."<< endl;
        }
          
};
class SingersYoutubeChannel: public YoutubeChannel{
public:
        SingersYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

        }
        void Practice(){
            cout << OwnerName <<"is taking singing classes, learning new songs, learning how to dance..."<< endl;
        }
          
};
int main()
{
        CookingYoutubeChannel cookingYtchannel("Ndo mkuro", "Faouzia");
        SingersYoutubeChannel singersYtchannel("Djo Mix Djo", "DJO");
        
        //cookingYtchannel.GetInfo();
        singersYtchannel.Practice();
        cookingYtchannel.Practice();
        
    
  
    system("pause > 0");
}
