#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p1.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // the only condition left is if p1.second == p2.second, no need to write it, as it is the only one remaining
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    //    auto t= '90';
    // auto is auto assignation
    //    cout<<typeid(t).name();
    // c++ stl is divided into four parts:
    /* 1. algorithms
     * 2. Containers
     * 3. Functions
     * 4. Iterators
     */
    // CONTAINERS:-
    // PAIRS : these lie inside the utility library
    //  you can store multiple values in a single variable using pairs:
    //           pair<int, int> p = {1,3};
    //           cout<<p.first<<endl;
    //           cout<<p.second<<endl;
    //
    //           //nested property of pairs:-
    //           pair<int, pair<int, int>> k= {1,{2,3}};
    //           cout<<k.second.second<<endl;
    //
    //           //pair as a data type,here you can have a pair array
    //           pair<int, int> a[] = {{1,3}, {2,5}, {9,0}, {89,5}};
    //           cout<<a[2].first;

    // CONTAINERS:-
    // Vectors:
    //            vector<int> a;
    //            // two ways to insert elements inside a vector
    //            a.push_back(1);
    //            a.emplace_back(2);
    //
    //            // pair data type vector:
    //            vector<pair<int, int>> s ;
    //            s.push_back({1,2}); // need to use curly braces
    //            s.emplace_back(2,3); // curly braces not used
    //
    //            // declaring with size and same value
    //            vector<int> v(5,20); // this will make [20,20,20,20,20]
    //
    //            //declaring the size
    //            vector<int> v1(6); // you can still increase the size using push_back or emplace_back
    //
    //            //copying the values of one vector to another
    //            vector<int> v2(v); // copies the values of v1 into v2
    //
    //            //accessing the values of vector
    //            cout<<v[0];
    //            cout<<v.at(3); // second method

    // ITERATORS:-
    // We have many iterators in cpp:-
    //  vector<int> a;
    //  a.push_back(5);
    //  a.push_back(4);
    //  a.push_back(21);
    //  a.push_back(11);
    //  a.push_back(89);

    // vector_name.begin()
    // it points to the memory of the first element of the array
    // notice that it points to the "MEMORY"
    // so we use *() , to access the element of that memory, which is generally the rule for *()
    //              vector<int>::iterator it = a.begin();
    //              it +=3;
    //              cout<<*(it);
    // .end()
    // .end() points to the memory location which is "right after the last element", so you need to -- the iterator
    //       vector<int>::iterator name = a.end();
    //       name -=1;
    //       cout<<*(name); //prints 89
    // .rend() // reverse end
    // suppose the array is [10,20,30,40,50]
    // .rend will point to the one more than the or before 10 memory location of array, because it reverses the vector,
    // so you need to --iterator
    // .rbegin() // reverse begin
    // same is the case for r.begin() just insert begin on the place of end

    //       cout<<a.back(); //prints the last element

    // printing vector using for loop and iterators:
    //        for(vector<int>::iterator it = a.begin(); it!= a.end(); it++){
    //            cout<<*(it)<<" ";
    //        }

    // no need to write this big syntaxed data type vector<int>::iterator , instead use auto
    //        for(auto it = a.begin(); it != a.end(); it++){
    //            cout<<*(it)<<" ";
    //        }

    // using for each loop:
    //        for(auto it:a){
    //            cout<< it <<" ";
    //        }

    // .erase(), deletes the element and reshuffles the vector accordingly, without empty spaces
    //        a.erase(a.begin()+1);
    //        for(int i : a){
    //            cout<<i<<" ";
    //        }

    // if you want to delete a segment or a whole set of elements which are continuous in the vector
    // we have .erase(starting_address, ending_address+1) or .erase[starting_address, ending_address)
    //        a.erase(a.begin(), a.begin()+2);
    //        for(int i : a){
    //            cout<<i<<" ";
    //        }
    // inserting by specifying position
    //        a.insert(a.begin(), 10,100);
    //        for( auto it = a.begin(); it !=a.end(); it++){
    //            cout<<*(it)<<" ";
    //        }

    // inserting no of elements by specifying the position
    //    a.insert(a.begin()+1, 2, 5); // will insert 5 at 1 and 2 place
    // inserting a vector into another vector
    //        vector<int> n(2,50);
    // a.insert(position_of_insertion, vector_to_be_inserted_first_element_position, upto_what_position)

    // size of vector
    //        cout<<a.size();

    //  pops out the last element
    //        a.pop_back();
    //        for(auto it : a){
    //            cout<<it<<" ";
    //        }

    // v1-> [12,54,23]
    // v2-> [8,42,52]
    // v1.swap(v2)
    // v1 -> [8,42,52] and you understand the rest
    //            vector<int> v;
    //        a.clear(); erases the entire vector
    //            cout<<v.empty();  // says true(1) if vector is empty and 0(false) for vice versa

    // CONTAINERS:-
    // LISTS:-

    // insert function in a vector is costly
    // list -> doubly linked list is maintained in the backend
    // vector -> singly linked list is maintained in the backed
    //            list<int> ls;
    //
    //            ls.push_back(8); //{8}
    //            ls.emplace_back(45); // {8,45}
    //            ls.push_front(5); //{5,8,45}
    //            ls.emplace_front(89); // {89,5,8,45}
    //            for(auto i : ls){
    //                cout<<i<<" ";
    //            }
    //
    // all other functions are similar to vectors:-
    // begin, end, rbegin, rend, clear, insert, size, swap

    // CONTAINERS:-
    // Deque:-
    //    deque<int> q;
    //    q.push_back(3); {3}
    //    q.push_front(33); {33,3}
    //    q.emplace_front(34); {34,33,3}
    //    q.emplace_back(21); {34,33,3,21}
    //
    //    q.pop_back();
    //    q.pop_front();
    //
    //    q.back();
    //    q.front();

    // rest functions same as vector:-
    // begin, end, rend, rbegin, insert, clear, size, swap

    // CONTAINERS:-
    // Stack:-
    // mainly three functions are there, with time complexity O(1)
    // stack<int> st; // declaration
    // st.push(3);
    // st.push(8);
    // st.push(1);
    // st.push(90);
    // st.push(21);

    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top();
    //
    // cout<<st.empty();
    // cout<<st.size();

    // swapping two stacks:-
    // stack<int> st1;
    // st1.swap(st);
    // cout<<st1.top();

    // CONTAINERS:-
    // QUEUE:-
    // queue<int> q;
    // q.push(3); // {3}
    // q.push(9); // {3,9}
    // q.emplace(5); // { 3,9,5}
    // q.back() += 9; // {3,9,14}
    // cout<<q.back()<<endl; // prints 14
    // q.front() += 2; // {5,9,14}
    // cout<<q.front()<<endl; // prints 5
    // q.pop();   //pops out front element that is 5
    // cout<<q.front(); // prints 9
    //
    // all the other functions are similar to the stack:-
    // size, swap, empty
    // time complexity of pop, push and top is O(1)

    // CONTAINERS:-
    //  Priority Queue:- The largest element stays at the top
    //  Also known as MAX HEAP
    //  data inside the pq is not stored in a linear fashion, instead a tree is maintained
    // priority_queue<int> pq;
    // pq.push(9); //{9}
    // pq.push(90); //{90, 9} --> the largest element stays at the top
    // pq.push(21); // {90,21,9} --> the element is inserted accordingly where it should acc to the sorting
    // pq.push(23); //{90,23,21,9}
    // cout<<pq.top(); //prints 90
    // pq.pop(); // pops out 90
    // cout<<pq.top(); // prints 23
    //
    //  size, swap , empty are same

    // Minimum priority queue:- a pq that stores the smallest element at the top
    // also known as MIN HEAP
    // see the syntax to declare it with precision, vector and greater are declared inside the queue:-
    // priority_queue<int, vector<int>,greater<int>> pq;
    // pq.push(9); //{9}
    // pq.push(3); // {3,9}
    // pq.push(8); // {3,8,9}
    // pq.push(5); //3,5,8,9}
    // cout<<pq.top(); // prints 3
    // time complexity:
    //.push, .pop -> O(logn)
    // .top -> O(1)

    // CONTAINERS:-
    // SET:- Stores in sorted manner, and stores unique elements
    // not a liner container, as a tree is maintained
    // set<int> s;
    // s.insert(9); // {9}
    // s.insert(2); // {2,9}
    // s.insert(8); // {2,8,9}
    // s.insert(1); // {1,2,8,9}
    // s.insert(2); // will not store 2 again, as 2 is already there so set remains, --> {1,2,8,9}
    // s.emplace(7); // {1,2,7,8,9}
    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of above
    // auto it = s.find(8); // iterator points to the element's address
    // auto it1 = s.find(21); // for element not present, it will point to .end(), that is last element address + 1;
    // cout<<*(it1); // some garbage value would have been stored, will be shown
    // s.erase(9); //erases 9, and maintains the order
    // for erase you can either give the element or give the iterator to erase
    //.erase(iterator_pointing_to_that_element) or give the element starting address to the ending one, like an interval is being erased
    // auto io = s.find(9);
    // s.erase(io);
    // auto ir = s.find(2);
    // auto ir1 = s.find(1);
    // s.erase(ir, ir1); // will erase elements 2,8 not 1 as 1 is ending bound, will not be included, as [start, end)
    // size, empty and swap are same as the vector
    // s.count(2); //return true or false if present or not
    // in set everything happens in O(logn) time
    // upper bound and lower bound functions

    // CONTAINERS:-
    // Multiset:- can store multiple occurrences, but maintains sorting
    // multiset<int> ms;
    // ms.insert(8);
    // ms.insert(2);
    // ms.insert(6);
    // ms.insert(6);
    // ms.insert(6);
    // ms.insert(8);
    // ms.erase(6); // will erase all the 6's
    // so better give iterator or address of the element using .find()
    // ms.erase(ms.find(6));
    // ms.erase(ms.find(6), ms.find(6)+1); // will erase .find(6) element and the one next to it which will be 6 as it' sorted

    // CONTAINERS:-
    // Unordered set:- Same as set, but just unsorted
    // time complexity :- everything takes O(1) time, but in a very rare case, takes O(n) time, verrrrrry rare, in the WORST case
    // all operations are similar to set but upper and lower bound functions don't work
    // unordered_set<int> us;

    // CONTAINERS:-
    // Maps:-
    // keys and value mapping
    // Map stored unique keys in sorted order
    /* keys  ->  values
        1    ->  raj
        2    ->  alex
        3    ->  sam
        4    ->  ravi
        5    ->  alex */
    //                // so there can only be one key or unique key,  but values can be more than two
    //                // key can be of any data structure, int, double, float, etc
    //                //map< key_data_type, value_data_type> name_of_the_map;
    //                map<int, int > mp; // key -> int, value -> int
    //                map<int, pair<int, int>> mp1;  // key -> int, value -> pair or two integers
    //                map<pair<int, int>, int> mp2;  // key -> pair or two integers, value -> int
    //                mp[1] = 4; //{1,4} will be stored in the map
    //                mp.insert({2, 5}); // {2,5} will be stored
    //                mp.emplace(8,9); // inserts {8,9}
    //                // remember 1,2,8 are keys and the right sides are values
    //                // and keys are unique, so remember this while assigning
    //                mp2[{2,3}] = 10; // stores 10 value at key {2,3}
    //                for( auto it = mp.begin(); it!= mp.end(); it++){
    //                    cout<<(it->first)<<" ";
    //                    cout<<(it->second)<<endl;
    //                }
    //                //cout<<mp[3]; //key is passed,  not found, so null will be returned, otherwise value of the key is printed
    //                // find the iterator using .find()
    //                auto it = mp.find(2);
    //                cout<<(it->second); //it->first returns, key, and it->second return value;
    //
    //                auto t = mp.upper_bound(1);
    //                auto t1 = mp.lower_bound(2);
    //
    //                // size, swap , empty same as those of above

    // CONTAINERS:-
    // Multimap :- can have more keys that is duplicate keys but sorted

    // CONTAINERS:-
    // Unordered map :- unique keys but not sorted
    // time complexity :- O(1)

    // ALGORITHMS:-
    // sort() :- can sort arrays ,vectors , pairs, etc;
    //    int arr[] = {3,0,4,-1,90,89};
    //    //no.of elements in array
    //    int n = sizeof(arr)/sizeof(arr[0]);
    //    cout<<n<<endl;
    // sort(first_position, last_position)
    //    sort(arr+1, arr+n);

    // for descending order:-
    // remember the parantheses after greater<int> ();
    // sort(arr, arr+n, greater<int>());
    //    for(auto it: arr){
    //        cout<<it<<" ";
    //    }

    // now for my own way sorting, use comp which is a bool function you declare by yourself
    // pair<int, int> a[] = {{1,2},{2,1},{4,1},{5,9}};
    // my own way sorting:_
    // sort it according to the second element
    // if second ele is same, then sort
    // acc to the first ele , but in descending order

    // declare your comp outside the main()
    // ---> comp() on the top which is a boolean function and returns true or false
    //    int n = sizeof(a)/sizeof(a[0]);
    //    cout<<n<<endl;
    //    sort(a, a+n , comp);
    //    for(pair<int, int> i : a){
    //        cout<<i.first<<" "<<i.second<<endl;
    //    }

    // ALGORITHMS:-
    // __builtin_pop_count();
    // returns the number of set bits:-
    // nt num = 7;
    // int count = __builtin_popcount(num);
    // cout<<count<<endl;

    // for long long numbers
    // long long num1 = 28429819383;
    // int count1 = __builtin_popcountll(num1);
    // cout<<count1;

    // ALGORITHMS:-
    // next_permutation(starting_iterator, ending_iterator )
    // gives the next dictionary permutation starting from the string only like:-
    // 123 -> 132 -> 213 -> 231 -> 312 -> 321 -> null
    // but for 231, it will start from 312 -> 321 -> null
    // so to print all the permutations, start from the sorted string!
    //    string s = "simran";
    //    sort(s.begin(), s.end());
    //    int count = 0;
    //    do {
    //        cout << s << endl;
    //        count++;
    //    }
    //    while(next_permutation(s.begin(),s.end()));

    // ALGORITHMS :-
    // max_element(start_iterator, end_iterator);
    // int a[] = {36,8,3,7,2,7,8,3,34};
    // int size = sizeof(a)/sizeof(a[0]);
    // int maxi = *max_element(a, a+size);
    // cout<<"max element is : "<<maxi<<endl;
    // int mini = *min_element(a,a+size);
    // cout<<"min element is : "<<mini;

    // ALGORITHMS:-
    //  Binary Search:- binary_search(starting_iterator, ending_iterator, ele to be found), bool function, return 0 or 1
    //     int a[] = {2,3,5,1,5,70,89};
    //     int size = sizeof(a)/ sizeof(a[0]);
    // bool res = binary_search(a, a+size, 55);
    // cout<<res;

    // ALGORITHMS:-
    // lower_bound() and upper_bound()

    // lower_bound(first_iterator, last_iterator, value) :- returns the first occurrence the value, if not present, then
    // returns the immediate greater value ele address
    // for a = [1,3,5,7,10]
    // if you aim for 6 but not present it will return 7, the immediate present greater than ele
    // int ind = lower_bound(a, a+size, 9)-a;
    // cout<<ind;

    // int ub = upper_bound(a,a+size, 4)-a;
    // cout<<ub;

    // upper and lower bound needs more practice!
}