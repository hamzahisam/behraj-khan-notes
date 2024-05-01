/*
#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

class socialNetwork{
    map<string, vector<string>> connections;
    
public:
    void addConnections(const string & from, const string & to){
        connections[from].push_back(to);
        connections[to].push_back(from);
    }
    
    vector<string> getConnections(string & node){
        return connections[node];
    }
    
    int shortestPath(string & from, string & to){
        map<string, int> distance;
        queue<string> q;
        q.push(from);
        distance[from] = 0;
        while(!q.empty()){
            string current = q.front();
            q.pop();
            if(current == to){
                return distance[current];
                for(string & neighbour : connections[current]){
                    if(distance.find(neighbour) == distance.end()){
                        distance[neighbour] = distance[current] + 1;
                        q.push(neighbour);
                    }
                }
            }
        }
        return -1;
    }
};

int main(){
    socialNetwork SN;
    SN.addConnections("Pakistan", "India");
    SN.addConnections("Pakistan", "Iran");
    SN.addConnections("Iran", "Afghanistan");
    SN.addConnections("Afghanistan", "Turkey");
    SN.addConnections("Turkey", "France");
    SN.addConnections("France", "Greece");
    
    string from = "Pakistan", to = "Greece";
    int pathLength = SN.shortestPath(from, to);
    
}
*/
