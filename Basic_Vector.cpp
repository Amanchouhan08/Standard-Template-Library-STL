//vector<datatype>variable name;
//example- vector<int>v;

//vector<datatype>variable name(size of vector);
//vector<int>v(4);

//vector<datatype>variable name(size of vector, intialize with any value);
//vector<int>v(4,2);
//o/p- 2 2 2 2

/*
value insert
vector<int>a;
a.push_back(1);
o/p- 1
a.push_back(2);
o/p- 1 2
a.push_back(3);
o/p- 1 2 3
a.push_back(4);
o/p- 1 2 3 4
*/

//vector<int>a={1,2,3,4,5,6};

/*
int n;
cin>>n;
vector<int>a(n);
for(int i=0,i<n;i++){
  cin>>a[i];
*/

/*
remove value
vector<int>a={1,2,3,4,5,6};
a.pop_back();
//   0 1 2 3 4  indexing
o/p- 1 2 3 4 5 
a.erace(v.begain()+2);
o/p- 1 2 _ 4 5
     1 2 4 5
a.clear();
o/p-        all clear
*/

/*
size and capacity
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.size();
o/p- 3
v.capacity();
o/p- 4
*/

/*
front, Back, empty
vector<int>a={1,2,3,4,5,6};
cout<<a.front();
o/p- 1
cout<<a.back();
o/p- 6
cout<<a.empty();
o/p- 0
  if vector a has no element then empty() will return 1.
*/

/*
sorting
sort(v.begin(), v.end());  //sort in increasing order 1 2 3 4 5
sort(v.begin()), v.end(), greater<int>());  //sort in decreasing order 5 4 3 2 1 
*/

/*
vector<int>a={1,2,3,4,5,6};
o/p- 1 2 3 4 5 
a.erace(v.begain()+2);
o/p- 1 2 _ 4 5
     1 2 4 5
a.insert(a.begin()+2,3);    // a.begin()+1 is position  and 3 in value
o/p- 1 2 3 4 5 
*/

/*
copy one vector in another vector
vector<int>a={1,2,3,4,5,6};
vector<int>b;
a=b;
*/

/*
Binary search
vector<int>a={1,2,3,4,5,6};
cout<<binary_search(a.begin(), a.end(), 4);  //if 4 will present in the vector a then it gives the o/p 1 if 4 not present then give o/p 0.
o/p- 1  
 If we want the index of 4
cout<<find(a.begin(), a.end(), 4)-a.begin();  //find will point the index 4 and we minus from first index it will gives the correcr index of 4.
o/p- 3
*/

/*
count and max
vector<int>v={1,2,3,5,5,6};
cout<<count(v.begin(), v.end(), 5);  //count occourance of 5 in vector v
o/p- 2
cout<<max_element(v.begin(), v.end());  //return maximum value from vector v
o/p- 6
*/







