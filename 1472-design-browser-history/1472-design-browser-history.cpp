struct pages{ // created 
public:
    string url;
    pages* prev;
    pages* next;

    pages(string s1){
        this->url = s1;
        prev = nullptr;
        next = nullptr;
    }
};


class BrowserHistory {
public:
    pages* curr;

    BrowserHistory(string homepage) {
        curr = new pages(homepage);
    }
    
    void visit(string url) {
        pages* temp = new pages(url);
        temp->prev = curr;
        curr->next = temp;
        curr = curr->next;
    }
    
    string back(int steps) {
        while(steps-- && curr && curr->prev){
            curr = curr->prev;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(steps-- && curr && curr->next){
            curr = curr->next;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */