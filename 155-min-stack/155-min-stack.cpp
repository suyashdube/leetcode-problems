class Node{
public:
    Node*next;
    int val;
    Node(int n ){
        next = NULL;
        val = n;
    }
};

class MinStack {
public:
   Node* head;
   map<int, int> m; //key:value -> element:it's count
    MinStack(){
        head = NULL;

    }
    void push(int x){
        if(!head) // empty or null
        {
            head = new Node(x);
            m.insert({x,1});
        } else {
            //head not null
            Node* temp = new Node(x);
            temp -> next = head;
            head = temp; //new head is temp
            if(m.find(x) == m.end()) //if x is not present in map
                //this statement will be true
                m.insert({x,1});
            else
                m[x]++;

        }

    }
    void pop(){
        if(!head) return;
        else{
            m[head->val]--; //decrement count of the term in map
            if(m[head->val]==0) m.erase(head-> val);
            head = head->next;
        }

    }
    int top(){
        if(!head) return -1;
        else return head->val;

    }
    int getMin(){
        if (!m.empty()) //not empty map
        {
            return (m.begin())->first; //pair structure first term is element
        }
        else return -1;

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */