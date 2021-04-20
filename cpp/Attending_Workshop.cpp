/*HackerRank Solution Input
6
1 3 0 5 5 8
1 1 6 2 4 1
*/
#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.

struct Workshop{
    int start;
    int duration;
    int end;
};

struct Available_Workshops{
    int N;
    vector<Workshop> vec;
    Available_Workshops(int &n)
    {
        vec = vector<Workshop>(n);
        N = n;
    }
};
bool compare(Workshop &w1, Workshop &w2)
{
    return w1.end < w2.end;
}

//Implement the functions initialize and CalculateMaxWorkshops

Available_Workshops* initialize(int start_time[], int duration[],int n){
    Available_Workshops* obj = new Available_Workshops(n);
    obj->N = n;
    for(int i = 0 ; i < n ; i++){
        obj->vec[i].start = start_time[i];
        obj->vec[i].duration = duration[i];
        obj->vec[i].end = start_time[i] + duration[i];
    }
    sort(obj->vec.begin(),obj->vec.end(),compare);
    return obj;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int count = 0;
    int e = 0;
    for (int i = 0; i < ptr->N; i++){
        if(e <= ptr->vec[i].start){
            count++;
            e = ptr->vec[i].end;
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
