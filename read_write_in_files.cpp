
#include<iostream>
#include<fstream>
using namespace std;

void write_in_file(){
    ofstream myfile;
    myfile.open("record.sam",ios:: binary|ios:: app);
    myfile.write("juma",0);

}
void read_from_file(){
    ifstream infile;
    infile.open("record.bank", ios::binary);
    if(!infile)
    {
        cout<<"Error in Opening! File Not Found!!"<<endl;
        return;
    }
    cout<<"\n****Data from file****"<<endl;
    while(!infile.eof())
    {
        if(infile.read()>0);
        {
            show_data();
        }
    }
    infile.close();

}
void show_data(){

}
int main(int argc, char const *argv[])
{
    
    return 0;
}
