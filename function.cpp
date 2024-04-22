#include <iostream>
using namespace std;

class bag
{ 
      private:
           string  box, tiffinBox;
            
      public:
           int book,copy;
           
     void setData(string  bx,string  tf);
     void getData()
     {
       cout<<"lunch:"<<tiffinBox<<endl;
       cout<<"box:"<<box<<endl;
       cout<<"no.of book:"<<book<<endl;
       cout<<"no.of copy:"<<copy;
       
     }
           
    
};

void  bag :: setData(string  bx,string  tf)
{
    box=bx;
    tiffinBox=tf;
}

int main() {
    
   bag raj;
   raj.book=7;
   raj.copy=9;
   raj.setData("pen","roti");
   raj.getData();
    
  
    return 0;
}
