#include<iostream>
#include<fstream>
#include<string>
#include <list>
using namespace std;




int main(int argc, char *argv[])
{
	string line;
	
	list<string> instructions;
  	list<string>::iterator instructionsIt;
  
	string tempWord("");
     
	if(argc==2)
	{
          	ifstream myfile(argv[1]);
		if(myfile.is_open())
		{
			
			while(myfile.good())
			{
				getline(myfile,line);

				int i=0;
				
				while(i<(int)line.length())
				{
					if(line.at(i)==';')
					{
						instructions.push_back(tempWord);
						tempWord="";	
					}
					else
					{						
						tempWord.append(1,line.at(i));
					}
					i++;

				}


			}
			myfile.close();


		}
		else cout<< "Unable to open file";

					
		for (instructionsIt=instructions.begin(); instructionsIt!=instructions.end(); ++instructionsIt)
		{
			cout<< (*instructionsIt) <<endl;
		}

	
	}
   	

	return 0;
}
