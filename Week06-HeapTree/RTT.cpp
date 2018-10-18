#include <bits/stdc++.h>
using namespace std;

struct Topic{
    int id;
    long long int old_zScore;
    long long int new_zScore;
    long long int changes;
};

vector<Topic> heapify(vector<Topic> TopicList) {
    for(int i = TopicList.size()/2; i >= 0; i--) {
        int largest = i;  
        int l = 2*i + 1;  
        int r = 2*i + 2; 
        if(l < TopicList.size()) { 
            if(TopicList[largest].id < TopicList[l].id) {
                swap(TopicList[largest], TopicList[l]);
            }
        }
        if(r < TopicList.size()) {
            if(TopicList[largest].id < TopicList[r].id) {
                swap(TopicList[largest], TopicList[r]);
            }
        }    
    }
    return TopicList; 
} 
 
vector<Topic> heapSort(vector<Topic> TopicList) {
    vector<Topic> sorted;
    for(int i = 0; i < TopicList.size(); i++) {
        sorted.push_back(TopicList[0]);
        TopicList[0].id = -1;
        TopicList = heapify(TopicList);
    }
    return sorted;
}

int main()
{
    map<long long int,vector<Topic>,greater<long long int> > heap;
    int n;
    cin >> n;
    int id, z, p, l, c, s;
    Topic new_topic;

    for(int i = 0; i < n; i++) {
        cin >> id >> z >> p >> l >> c >> s;
        new_topic.id = id;
        new_topic.old_zScore = z;
        new_topic.new_zScore = (p*50LL) + (l*5LL) + (c*10LL) + (s*20LL);
        new_topic.changes = new_topic.new_zScore - new_topic.old_zScore;
        heap[new_topic.changes].push_back(new_topic);
    }

    for(map<long long int, vector<Topic>, greater<long long int> >::iterator it=heap.begin(); it!=heap.end(); it++) {
        it->second = heapify(it->second);
        it->second = heapSort(it->second);
    }

    int counter = 1;
    for(map<long long int, vector<Topic>, greater<long long int>>::iterator it=heap.begin(); it!=heap.end(); it++) {
        for(int i = 0; i < (it->second).size(); i++) {
            cout << (it->second)[i].id << " " << (it->second)[i].new_zScore << endl;
            if(++counter > 5) {
                break;
            } 
        }
        if(counter > 5) {
            break;
        }
    }
    return 0;
}