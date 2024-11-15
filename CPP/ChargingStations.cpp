#include <bits/stdc++.h>
using namespace std;
int minChargingStops(vector<pair<int, int>> &stations, int C0, int L){
    //sort stations by position 
    sort(stations.begin(), stations.end());
    priority_queue<int> maxHeap; 
    int current_reach= C0;
    int stops=0;
    int i=0, n=stations.size();

    //Add all your reachable stations to the maxHeap
    while (current_reach<L){
        while (i<n && stations[i].first<=current_reach){
            maxHeap.push(stations[i].second);
            i++;
        }
    }
    //If no stations are reachable, the destination is unreachable
    if (maxHeap.empty()) return -1; 
    
    current_reach+=maxHeap.top();
    maxHeap.pop();
    stops++;

    return stops;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, C0, L;
    cin >> n>> C0>>L;

    vector <pair<int, int>> stations(n);
    for (int i=0; i<n; i++){
        cin>> stations[i].first>>stations[i].second;

    }
    cout << minChargingStops(stations, C0, L) << endl;

    return 0;

}