#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'nearlySimilarRectangles' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts 2D_LONG_INTEGER_ARRAY sides as parameter.
 */

//long nearlySimilarRectangles(long arr[][2]) {
//
//
//
//}

int main()
{
    int n, two;
    long count=0;
    cin>>n>>two;
    long arr[n][2];
    unordered_map<double, int> umap;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr[i][j];
        }
       umap[long double(arr[i][0])/arr[i][1]]+=1;
    }
    for (auto x : umap)
        count+=x.second;

    cout<<"result: "<<count;



    //cout<<nearlySimilarRectangles(arr);


    return 0;
}
