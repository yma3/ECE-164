// THIS IS THE PROVIDED CODE FOR PROGRAM #2, DSA 1, SPRING 2016

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
	Data(const string &s) {
		data = s;
	}
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


class data1 {
public:
	Data *pData;
	unsigned long long front;
	unsigned long long back;
	int size;
};
class data2 {
public:
	Data *pData;
	float tot;
};
class data3 {
public:
	Data *pData;
	unsigned long long front;
	unsigned long long back;
};

data1 dataArray[1200000];
data2 data2Array[1200000];
data3 data3Array[1200000];
data3 hold;

list<Data *>::iterator itr1;
list<Data *>::iterator itr2;

bool Comp1(const data1 &first, const data1 &second) {
	if (first.size != second.size) {
		return first.size < second.size;
	} else {
		return first.front < second.front;
	}
}
bool Comp2(const data2 &first, const data2 &second) {
	return first.total < second.total;
}
bool Comp3(const data3 &first, const data3 &second) {
	if (first.front != second.front) {
		return first.front < second.front;
	} else {
		return first.back < second.back;
	}
}

void repopulateList(list<Data *> &l) {
	itr1 = l.begin();
	itr2 = l.end();
	int i = 0;
	while (itr1 != itr2) {
		*itr1 = data1[i].pData;
		++i;
		++itr1;
	}
}
void repopulateList2(list<Data *> &l) {
	itr1 = l.begin();
	itr2 = l.end();
	int i = 0;
	while (itr1 != itr2) {
		*itr1 = data2[i].pData;
		++i;
		++itr1;
	}
}
void repopulateList3(list<Data *> &l) {
	itr1 = l.begin();
	itr2 = l.end();
	int i = 0;
	while (itr1 != itr2) {
		*itr1 = data3[i].pData;
		++i;
		++itr1;
	}
}

void insertionSort(int size) {
	int i = 1;
	int j = 0;
	int x, y;
	while (i < size) {
		if (node3Compare(node3Container[i], node3Container[j])) {
			x = i;
			y = j;
			while (node3Compare(node3Container[x], node3Container[y])) {
				if (y == 0) {
					temp = node3Container[1];
					node3Container[1] = node3Container[0];
					node3Container[0] = temp;
					break;
				}
				temp = node3Container[x];
				node3Container[x] = node3Container[y];
				node3Container[y] = temp;
				--x;
				--y;
			}
		}
		++i;
		++j;
	}
}

void countingSort(list<Data *> &i) {
	itr1 = l.begin();
	itr2 = l.end();
	list<Data *>::iterator itr;
	for(itr = itr1; itr != itr2; itr++) {
		int index = 1000 * atof((*itr)->data);
		T3Array[index]++;
	}
	index = 0;
	for(itr = itr1; itr != itr2; itr++) {
		if(T3Array[index] != 0) {
			T3Array[index]--;
			*itr->data = index;
		} else {
			index++;
		}
	}
}


unsigned long long test[10];
void sortDataList(list<Data *> &l) {

	list<Data *>::const_iterator itr = l.begin();
	
	int type;
	int size = l.size();
	int firstSix = atoi((*itr)->data.substr(0,6));	

	if (size <= 200000) {
		type = 1;
	} else if ((l.front()->data.size()) <= 8) {
		type = 3;
	} else if (firstSix == atoi((*(itr+1))->data.substr(0,6)) && firstSix == atoi((*(itr+2))->data.substr(0,6)) ) {
		alg = 4;
	} else {
		alg = 2;
	}
}



	itr1 = l.begin();

	switch (type) {
	case 1:
		int r;
		int k;
		int strlen;
		for(int r = 0; r < size; ++r) {
			dataArray[r] = data1();
			k = (*itr1)->data.find('.');
			if(a==20)
		sort(dataArray, dataArray+size, Comp1);
		repopulateList1(l);
		break;
	case 2:
		sort(dataArray, dataArray+size, Comp1);
		repopulateList2(l);
		break;
	case 3:
		countingSort(l);
		break;
	case 4:
		insertionSort(size);
		repopulateList3(l);
		break;
	};
}
