#include<iostream>
#include<limits>
using namespace std;

int main(){
  cout<<"Customer Interaction ChatBot\n\n";
  int choice = 0;

  while(true){
    cout<<"\n\n 0. Exit\n 1. Main Menu\n 2. Products\n 3. About Us\n 4. FeedBack\n";
    cin>>choice;

    if(cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout<<"\nEnter Valid Number!";
      continue;
    }

    if(choice==0) break;
    else if(choice==1) continue;
    else if(choice==2){
      cout<<"\n1.Smartphones\n2.Tablets\3.Laptops\n4.Adaptors";
    }
    else if(choice==3){
      cout<<"\n We woking all over india, providing best quality \nelectronics at cheapest rate. we take a strong action against frauds\n if you have any issue you can share feedback.";
    }
    else if(choice==4){
      int n;
      cout<<"Enter Your Feedback sir:\n\n  1. Device issue\n 2. Product not delivered\n 3. Misbihavior of delivery team";
      cin>>n;
      cout<<"we will work on it sir, thanks for the feedback!!\n";
    }
    else{
      cout<<"Unrecognized Error\n";
    }
  }
  
  return 0;
}
