#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

// A simple class; each object holds one string
class Data {
public:
  string data;
  Data(const string &s) { data = s; }
};

// Load the data from a specified input file
void loadDataList(list<Data *> &l) {
  string filename;
  cout << "Enter name of input file: ";
  cin >> filename;

  ifstream input(filename.c_str());
  if (!input) {
    cerr << "Error: could not open " << filename << endl;
    exit(1);
  }

  // The first line indicates the size
  string line;
  getline(input, line);
  stringstream ss(line);
  int size;
  ss >> size;

  // Load the data
  for (int i = 0; i < size; i++) {
    string line;
    getline(input, line);
    l.push_back(new Data(line));
  }

  input.close();
}

// Output the data to a specified input file
void writeDataList(const list<Data *> &l) {
  string filename;
  cout << "Enter name of output file: ";
  cin >> filename;

  ofstream output(filename.c_str());
  if (!output) {
    cerr << "Error: could not open " << filename << endl;
    exit(1);
  }

  // Write the size first
  int size = l.size();
  output << size << endl;

  // Write the data
  for (list<Data *>::const_iterator ipD = l.begin(); ipD != l.end(); ipD++) {
    output << (*ipD)->data << endl;
  }

  output.close();
}

void sortDataList(list<Data *> &);

// The main function calls routines to get the data, sort the data,
// and output the data. The sort is timed according to CPU time.
int main() {
  list<Data *> theList;
  loadDataList(theList);

  cout << "Data loaded.  Executing sort..." << endl;

  clock_t t1 = clock();
  sortDataList(theList);
  clock_t t2 = clock();
  double timeDiff = ((double) (t2 - t1)) / CLOCKS_PER_SEC;

  cout << "Sort finished. CPU time was " << timeDiff << " seconds." << endl;

  writeDataList(theList);
}

// -------------------------------------------------
// YOU MAY NOT CHANGE OR ADD ANY CODE ABOVE HERE !!!
// -------------------------------------------------

// You may add global variables, functions, and/or
// class defintions here if you wish.

list<Data *>::iterator lfrontitr;
list<Data *>::iterator lbackitr;



myObject *sortedBucket[120000];
myObject listObject[120000];
//int count = 0;

int T3Array[1000000] = {0};

void populateData(string &s)
{
	while()
}




void insertionSort(list<Data *> &l ) {
	lfrontitr = l.begin();
	lbackitr = l.end();
	
	list<Data *>::iterator itr;
	list<Data *>::iterator itrbackward;	

	for(itr = lfrontitr; itr != lbackitr; itr++) {
		for(itrbackward = itr; itr != lfrontitr; itrbackward--) {
						

}


void countingSort (list<Data *> &l ) {
	
	lfrontitr = l.begin();
	lbackitr = l.end();
	
	list<Data *>::iterator itr;

	for(itr = lfrontitr; itr != lbackitr; itr++) {
		int index = 1000 * atof((*itr)->data);
		T3Array[index]++;
	}
	index = 0;
	for(itr = lfrontitr; itr != lbackitr; itr++) {
		if(T3Array[index] != 0) {
			T3Array[index]--;
			*itr->data = index;
		} else {
			index++;
		}
	}
}





void sortDataList(list<Data *> &l) {
  // Fill in this function

	list<Data *>::iterator lfrontitr = l.begin();
	list<Data *>::iterator lbackitr = l.end();
	list<Data *>::iterator itr;
	int firstSix = atoi((*lfrontitr)->data.substr(0,6));
	int type;
	int size = l.size();
	int strlen = lfrontitr->data.length();
	if(size <= 120000) {
		type = 1;
	} else if(strlen <= 8) {
		type == 3;
	} else {
//		for(itr = lfrontitr; itr != lbackitr; itr++) {
			if( firstSix == atoi((*(itr+1))->data.substr(0,6)) && firstSix == atoi((*(itr+2))->data.substr(0,6)) ) {
				type = 4;
			} else {
				type = 2;
			}
//		}
	}




	switch (type) {
	case 1:
		//DO T1 BUCKET SORT
	case 2:
		//DO T2 BUCKET SORT
	case 3:
		//DO T3 COUNTING SORT
	case 4:
		//DO T4 INSERTION SORT



	//BUCKET SORT FOR T1 AND T2

	//int i  = 0;
	//Setting up empty list
	while(int *pList = (l->next) != NULL) 
	{
		myObject *t;
		t = &listObject[i];
		t->p = pList;
		//Populate list
		t->Data
		


}


class myObject { 
public:
	unsigned int block1, block2, block3, block4, block5;
	Data *pNode;
	Data *next;
	myObject();
};


















