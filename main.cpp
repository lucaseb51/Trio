#include <iostream>
using namespace std;

void greatestToLeast(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  greatestToLeast(red, green, blue);



  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}


void greatestToLeast(int &red, int &green, int &blue){
    
    int greatest=red;
    int mid=green;
    int least=blue;

    if(red>blue&&red>green){
        greatest=red;
        if(blue>green){
            mid=blue;
            least=green;
        }else{
            mid=green;
            least=blue;
        }
        
    }else if(blue>red&&blue>green){
        greatest=blue;
        if(red>green){
            mid=red;
            least=green;
        }else{
            mid=green;
            least=red;
        }
    }else if(green>red&&green>blue){
        greatest=green;
        if(red>blue){
            mid=red;
            least=blue;
        }else{
            mid=blue;
            least=red;
        }
    }

    red=greatest;
    green=mid;
    blue=least;

}











