/* push()
 * pop()
 * empty()
 * top()
 * size()
 */

#include<iostream>
#include<queue>
using namespace std;

void display(priority_queue<int> pq){
  cout<<"\nCurrent Queue : ";
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}
int main(){
  priority_queue<int> pq;
  int val;

  cout<<"\nEnter the elemets for PRIORITY QUEUE : ";
  for(int i=0; i<5; ++i){
    cin>>val;
    pq.push(val);
  }
  display(pq);
}
