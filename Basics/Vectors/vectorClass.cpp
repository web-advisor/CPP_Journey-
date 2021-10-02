#include <bits/stdc++.h>
#define N 5
using namespace std;

void solve();
void iterators();
void capacity();
void elmtAccess();
void modifier();

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

void solve()
{
    iterators();
    cout << endl;
    capacity();
    cout << endl;
    elmtAccess();
    cout << endl;
    modifier();
}

void iterators()
{
    vector<int> vec;
    for (int i = 0; i < N; i++)
    {
        vec.push_back(i + 1);
    }

    cout << "\n\t Iterators : ";
    cout << "\n\t Output of begin and end : ";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }

    cout << "\n\t Output of cbegin and cend : ";
    for (auto i = vec.cbegin(); i != vec.cend(); i++)
    {
        cout << *i << " ";
    }

    cout << "\n\t Output of rbegin and rend : ";
    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        cout << *i << " ";
    }

    cout << "\n\t Output of crbegin and crend : ";
    for (auto i = vec.crbegin(); i != vec.crend(); i++)
    {
        cout << *i << " ";
    }
}

void capacity()
{
    vector<int> vec;
    for (auto i = 0; i < N; i++)
    {
        vec.push_back(i + 1);
    }
    cout << "\n\t Capacity Functions : ";
    cout << "\n\t Content of Vector : ";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }

    cout << "\n\t Size of Vector : " << vec.size();
    cout << "\n\t Capacity of Vector : " << vec.capacity();
    cout << "\n\t Max Size of Vector : " << vec.max_size();

    cout << "\n\t Checking if the Vector is Empty or not : ";
    cout << ((vec.empty()) ? "\n\t Vector is Empty . " : "\n\t Vector is not Empty . ");

    cout << "\n\t On resizing Vector as resize(4) : ";
    vec.resize(N - 1);
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n\t Resized Size : " << vec.size();
    cout << "\n\t Resized Capacity : " << vec.capacity();

    cout << "\n\t Shrinking to Fit ( Shrinking the capacity ) ";
    vec.shrink_to_fit();
    cout << "\n\t New capacity : " << vec.capacity();

    cout << "\n\t Reserving capacity as reserve(100)";
    vec.reserve(N * 20);
    cout << "\n\t New capacity : " << vec.capacity();
}

void elmtAccess()
{
    vector<int> vec;
    int count = 0;
    for (auto i = 0; i < N * 20; i++)
    {
        vec.push_back(i + 1);
    }
    cout << "\n\t Element Accessing Functions : ";
    cout << "\n\t Vector contents : \n\t ";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        count++;
        cout << *i << " ";
        if (count % 10 == 0)
        {
            cout << "\n\t ";
        }
    }
    cout << "\n\t Using [] operator -> [25] : " << vec[25];
    cout << "\n\t using at() function -> at(75) : " << vec.at(75);
    cout << "\n\t Using front() : " << vec.front();
    cout << "\n\t Using back() : " << vec.back();
    cout << "\n\t Using data() : " << *(vec.data());
}

void modifier()
{
    vector<int> vec1, vec2, vec3;
    cout << "\n\t Modifier Functions : ";
    cout << "\n\t Assign Functions : ";
    cout << "\n\t\t assign(7,100) : ";
    vec1.assign(7, 100);
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << " Size : " << vec1.size();
    vector<int>::iterator it = vec1.begin();
    advance(it, 3);
    cout << "\n\t\t assign(it,vec.end()-1) : ";

    vec2.assign(it, vec1.end() - 1);
    for (auto i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << " Size : " << vec2.size();

    cout << "\n\t\t assign({546,43,53,5,535,35}) : ";
    vec3.assign({546,43,53,5,535,35});
    for (auto i = vec3.begin(); i != vec3.end(); i++)
    {
        cout << *i << " ";
    }
    cout << " Size : " << vec3.size();

    vec1.clear();
    cout << "\n\t push_back function : ";
    cout << "\n\t\t push_back(200) push_back(100) push_back(300): ";
    vec1.push_back(200);
    vec1.push_back(100);
    vec1.push_back(300);
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n\t pop_back() : ";
    cout << "\n\t\t On popping from back : ";
    vec1.pop_back();
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    
    vec1.pop_back();
    vec1.pop_back();
    for (int i = 0; i < N * 3; i++)
    {
        vec1.push_back(i + 1);
    }
    cout << "\n\t Insert Functions : ";
    cout << "\n\t\t Vector Contents : \n\t\t ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    vector<int>::iterator it1 = vec1.begin();
    advance(it1, 7);
    cout << "\n\t\t insert(it1,2091) ";
    vec1.insert(it1, 2091);
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n\t\t insert(it1,4,100) ";
    vec1.insert(it1, 4, 100);
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n\t\t insert(it1,vec2.begin(),vec2.end())";
    vec1.insert(it1, vec2.begin(), vec2.end());
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    } 
    advance(it1, -3);
    int myarray[] = {1, 3, 3, 1, 3, 1, 2, 31, 213, 213};
    cout << "\n\t\t insert(it1,myarr,myarr) ";
    vec1.insert(it1, myarray, myarray + 6);
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }

    cout<<"\n\t Erase Functions : ";
    cout<<"\n\t\t erase(vec.begin()) : ";
    vec1.erase(vec1.begin());
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout<<"\n\t\t erase(vec.begin(),vec1.begin()+6) : ";
    vec1.erase(vec1.begin(),vec1.begin()+6);
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout<<"\n\t Swapping Function : ";              
    vec1.clear();
    vec2.clear();
    for(auto i=0;i<N*2;i++){
        vec1.push_back((i+1)*3);
    }
    for(auto i=0;i<N*2;i++){
        vec2.push_back((i+1)*5);
    }
    cout<<"\n\t\t Vectors before Swapping : ";
    cout<<"\n\t\t Vector 1 : "; 
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<"\n\t\t Vector 2 : "; 
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }
    vec1.swap(vec2);
    cout<<"\n\t\t Vectors after Swapping : ";
    cout<<"\n\t\t Vector 1 : "; 
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<"\n\t\t Vector 2 : "; 
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    } 
    
    cout<<"\n\t Emplace Function : ";
    auto it2=vec1.emplace(vec1.begin()+4,100);
    cout<<"\n\t\t emplace(vec1.begin()+4,100) ";
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }    

    cout<<"\n\t\t emplace(vec1.begin()+4,100) ";
    vec1.emplace(it2,422);
    cout << "\n\t\t Updated : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }    

}
