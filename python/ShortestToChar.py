def shortestToChar(S,C):
    l = []
    ci = S.find(C)
    for i in range(len(S)):
        print("string now is : " , S[i:])
        print("find e : ",S[i:].find(C))
        if i > ci and S[i:].find(C) >= ci :
            ci = S[i:].find(C)
            print('i :',i)
            print("ci : ",ci)
        ele = abs(ci-i)
        l.append(ele)
    return l

print("\nEnter the string and char : ")
S = input()
C = input()

l = shortestToChar(S,C)
print(l)

'''
vector<int> shortestToChar(string S, char C) {
        vector<int> position;
        for(int i =0; i < S.size(); ++i){
            if(S[i] == C){
                position.push_back(i);
            }
        }

        vector<int> result;
        for(int i = 0; i < S.size();++i){
            int mini = 2 * S.size() + 1;
            for(int j = 0; j < position.size();++j){
                int length = position[j] - i > 0 ? position[j] - i : i - position[j];
                mini = mini > length ? length : mini;
            }
            result.push_back(mini);
        }

        return result;
    }
'''
