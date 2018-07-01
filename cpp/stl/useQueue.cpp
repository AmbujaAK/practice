/* push()
 * pop()
 * front()
 * empty()
 * size()
 */

#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q){
  cout<<"\nCurrent QUEUE :";
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
}
int main(){
  queue<int> q;
  int val;
  cout<<"\nEnter the elements of Queue :";
  for(int i=0; i<5; ++i){
    cin>>val;
    q.push(val);
  }
  display(q);
}
